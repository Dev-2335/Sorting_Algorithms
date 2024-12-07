#include <stdio.h>

void insertionsort(int array[], int size)
{
    int temp=0,j;
    for(int i = 1 ; i < size;i++){
        temp = array[i];
        j = i-1;
        while(temp<array[j] && j>=0){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void main()
{
    int  size;
    printf("Enter size:");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter ele:");
        scanf("%d", &array[i]);
    }

    insertionsort(array,size);
}