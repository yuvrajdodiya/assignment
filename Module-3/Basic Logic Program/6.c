/*Find area of Triangle Formula : A = 1/2 * b * h*/
#include<stdio.h>
int main ()
{
	int b,h;
	float area;
	printf("\nEnter the value of b = ");
	scanf("%d",&b);
	printf("\nEnter the value of h = ");
	scanf("%d",&h);
	
	area = (float)b*h/2;
	printf("\nArea of Triangle is = %.2f",area);
	
		
	return 0;
}

