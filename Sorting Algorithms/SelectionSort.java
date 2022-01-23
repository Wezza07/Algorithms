public class SelectionSort {

    public void sort(int[] array){

        for (int i=0 ; i<array.length ; i++){
            int minIndex = FindMinIndex(array , i);
            swap(array,i,minIndex);
        }
    }

    public int FindMinIndex(int[] array , int start){
        int minIndex = start;
        for (int i=start ; i< array.length ; i++)
            if (array[i]<array[minIndex])
                minIndex = i;

        return minIndex;
    }

    public void swap(int[] array , int i , int j){
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
  
}
