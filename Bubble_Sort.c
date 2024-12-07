#include<stdio.h>
#include<time.h>
void main(){
  int n=100000;
  int arr[n];
  int i,j,x,y;
  FILE *fp1;
  fp1=fopen("worst.txt","r");
  for(i=0;i<n;i++){
    fscanf(fp1,"%d",&arr[i]);
  }
    clock_t start,end;
    start = clock();
  for (int i = 0; i < n-1; i++) {     
       for (int j = 0; j < n-i-1; j++) { 
           if (arr[j] > arr[j+1]) {
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
           }
       }
   }
  end = clock();
  double cuptime;
  cuptime = (double)(end - start)/CLOCKS_PER_SEC;
  // for(i=0;i<n;i++){
  //   printf("%d \n",arr[i]);
  // }
    printf("%lf",cuptime); 
}