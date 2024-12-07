#include<stdio.h>

void selectionSort(int array[],int size){
    int minElement,minIndex;
    for(int i = 0;i<size;i++){
        minIndex = i;
        minElement = array[i];
        for(int j = i+1;j<size;j++){
            if(minElement > array[j]){
                minIndex = j;
                minElement = array[j];
            }
        }
        array[minIndex] = array[i];
        array[i] = minElement; 
    }

    for(int i=0;i<size;i++){
        printf("%d \t ",array[i]);
    }
}

void main(){
    int  size;
    printf("Enter size:");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter ele:");
        scanf("%d", &array[i]);
    }

    selectionSort(array,size);
}