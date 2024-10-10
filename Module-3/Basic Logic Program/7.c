/*Find area of Rectangle Formula : A=wl*/
#include<stdio.h>
int main()
{
	int a,w,l;
	printf("\nEnter the value of w = ");
	scanf("%d",&w);
	printf("\nEnter the value of l = ");
	scanf("%d",&l);	
	
	a = w * l;
	
	printf("\nArea of Rectangle is = %d ",a);
	
	return 0;
}
