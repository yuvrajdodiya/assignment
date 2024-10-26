//1. Write a program to find out the max number from given array using function
#include <stdio.h>
int Max(int[], int);
int main()
{
    int arr[] = {2, 4, 1, 6, 3, 10}, i,size=6;
	printf("\nArray elements:  ");
    
	for (i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
    }
    
	printf("\n\nMaximum = %d",Max(arr,size));
    return 0;
}

int Max(int arr[], int size)
{
    int max=0,i;
    for (i=0;i<size;i++)
    {
        if(arr[i] >max)
        {
			max=arr[i];
		}
    }
    return max;
}



