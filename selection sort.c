#include<stdlib.h>


void swap(int *num1,int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}


void main(){
    int arr[] = {64,25,31,12,22,11};
    int end = 6;
    selectionSort(arr,end);
    for(int i = 0; i < end; i++){
    printf("%d\t", arr[i]);
}
}