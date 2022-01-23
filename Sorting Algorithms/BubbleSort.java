public class BubbleSort {

    public void sort(int[] array){
        boolean flag;
        for (int i=0 ; i<array.length ; i++){
            flag = true;
            for (int j=1 ; j<array.length-i ; j++){
                if (array[j]<array[j-1]){
                    swap(array,j,j-1);
                    flag = false;
                }
            }
            if (flag)
                return;
        }
    }

    public void swap(int[] array , int i , int j){
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
}
