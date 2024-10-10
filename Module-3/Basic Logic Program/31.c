//31.Convert kilometers into meters
#include<stdio.h>
int main()
{
	int km,meters;
	printf("\nEnter the value of kilometers = ");
	scanf("%d",&km);
	
	meters = km * 1000 ;
	printf("\n %d kilometers and %d is meters ",km,meters);
	return 0;
}
