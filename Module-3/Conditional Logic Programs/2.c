/*2. Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the value of n = ");
    scanf("%d",&n);
    
    if(n=1)
    {
    	printf("\nvalue n=1");
	}
	else if(n==0)
	{
		printf("\nvalue n=0");
	}
	else 
	{
		printf("\n value n=-1");
	}
	
	return 0;
}

