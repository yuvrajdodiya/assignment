/*3.WAP to Find Area And Circumference of Circle*/
#include<stdio.h>
int main ()
{
	const float pi=3.14;
	int area,r;
	float circle;
	
	printf("\nArea and circumference of circle = ");
	scanf("%d",&r);
	circle = 2*pi*r;
	
	printf("\nvalue of circumference of circle is = %.2f ",circle);
	
	return 0;
}
