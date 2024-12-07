#include<stdio.h>

int binarySearch(int array[], int l, int r, int findele)
{
    int midindex;
	if (l <= r) {

		midindex = ( l + r ) / 2;

		if (array[midindex] == findele){
            return midindex;
        }

		else if (array[midindex] > findele) {
			return binarySearch(array, l, midindex - 1, findele);
		}

		return binarySearch(array, midindex + 1, r, findele);
	}

	return -1;
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

    int findele;
    printf("Enter element to find:");
    scanf("%d", &findele);

    int result = binarySearch(array,0,size-1,findele);
    printf("%d",result+1);
}
