#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

const ll N = 1e6+10;

// O(Nlog(log(N)))
void sieve() {
    vector<bool> primes(N, true);

    for (int i = 2; i * i <= N ; ++i) {
        if(!primes[i])
            continue;
        for (int j = i * i; j < N; j+=i)
            primes[j] = false;
    }

    for (int i = 2; i <= 120 ; ++i) {
        if(primes[i])
            cout << i << ' ';
    }

}

int main() {

    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    cout.precision(20);

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int t=1;
//    cin >> t;
    while (t--){
        sieve();
    }

    return 0;
}
