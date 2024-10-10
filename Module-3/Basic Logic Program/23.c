//3.WAP to calculate swap 2 numbers with using of multiplication and division
#include<stdio.h>
int main()
{
	int num1,num2,ans;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	ans = num1 * num2 ;
	printf("\nmultiplication is = %d",ans,num1,num2);
	printf("\ndivision is = %d",num1/num2,num1,num2,ans);
	return 0;
}
