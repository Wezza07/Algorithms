#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

const int N = 1e5+10 , M = 1e9+7;

ll Mul(ll a , ll b){
    return ( (a%M) * (b%M) ) % M;
}

ll add(ll a , ll b){
    return ( (a%M) + (b%M) ) % M;
}

ll FastPow(ll b , ll p){
    if(p==0)
        return 1;

    ll res = FastPow(b,p>>1);

    if(p&1)
        return Mul(Mul(res,res),b);
    else
        return Mul(res,res);
}

// Pre-Compute function for factorials and its inverse

ll Fact[N] , inv[N];

void precompute(){
    Fact[0] = inv[0] = 1;
    for (int i = 1; i < N; ++i) {
        Fact[i] = Mul(Fact[i-1] , i);
        inv[i] = FastPow(Fact[i] , M-2);
    }
}

// nCr & nPr

ll nCr(ll n , ll r){
    return Mul(Fact[n] , Mul(inv[n-r] , inv[r]));
}

ll nPr(ll n , ll r){
    return Mul(Fact[n] , inv[n-r]);
}

void solve(){
    precompute();
}

int main() {

    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    cout.precision(20);

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int t=1;
//    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
