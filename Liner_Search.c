#include<stdio.h>

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

    int findele;
    printf("Enter element to find:");
    scanf("%d", &findele);

    for(int i=0;i<size;i++){
        if(array[i] == findele){
            printf("Index is : %d",i+1);
            break;
        }
    }
}