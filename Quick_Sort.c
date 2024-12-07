#include<stdio.h>

int pivotNumber(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void QuickSort(int arr[], int low, int high) { 
    if (low < high){
        int pi = pivotNumber(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}


int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n] ;
    printf("\nEnter %d numbers : \n" , n ) ;    
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]) ;   
    }
    printf("\n\nSorted array is:\n") ;
    QuickSort(a, 0, n-1) ;
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;

}