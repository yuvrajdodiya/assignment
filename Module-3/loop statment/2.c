//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
	printf("\nEnter the value og number = ");
	for(int i=0;i<5;i++)
	{
	printf("\nNum %d "i+1);
	scanf("%d",&num[i]);
	}
	 printf("\nValues of 5 numbers:\t");
    for(int i=0; i<5; i++)
    {
        printf(" %d,",num[i]);
    }
	
	return 0;
}
