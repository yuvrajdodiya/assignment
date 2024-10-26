//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
	int num[50],i;
	printf("\nEnter the value number = ");
	scanf("%d",&num);
	
	for(i=0;i<5;i++)
	{
		printf("\nNum %d ",i);
		scanf("%d",&num[i]);
	}
	printf("\nValues of 5 numbers:\t");
    for(i=0; i<5; i++)
    {
        printf(" %d,",num[i]);
    }
	return 0;
}
