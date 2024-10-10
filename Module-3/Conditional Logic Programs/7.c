//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the num = ");
	scanf("%d",&num);
	
	if(num<=33)
	{
		printf("\n student fial",num);
	}
	else 
	{
		printf("\n student is pass",num);
		}	
	return 0;
}
