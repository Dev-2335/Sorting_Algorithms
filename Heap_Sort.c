#include<stdio.h>

void max_heap(int array[],int ele_index,int index){
    int l = (ele_index*2)+1;
    int r = (ele_index*2)+2;
    int maxele_index = ele_index;
    if(l<index && array[l]>array[maxele_index]){
        maxele_index = l;
    }
    if(r<index && array[r]>array[maxele_index]){
        maxele_index = r;
    }
    if(maxele_index != ele_index){
        int temp = array[maxele_index];
        array[maxele_index] = array[ele_index];
        array[ele_index] = temp;
        max_heap(array,maxele_index,index);
    }
}

void heapSort(int array[],int index){
    for(int i=index/2-1;i>=0;i--){
        max_heap(array,i,index);
    }
    for(int j=index-1;j>=0;j--){
        int temp = array[0];
        array[0] = array[j];
        array[j] = temp;
        max_heap(array,0,j); 
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

    heapSort(array,size);
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}