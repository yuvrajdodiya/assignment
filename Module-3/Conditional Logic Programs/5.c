//5. Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the num = ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\n%d is a positive number ",num);
	}
	else 
	{
		printf("\n%d is a nagativ number ",num);
	}
	return 0;
}
