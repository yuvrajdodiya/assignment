/*10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
*/
#include<stdio.h>
int main ()
{
	int A,w,h,l,area;
	
	printf("\nEnthe the value of w = ");
	scanf("%d",&w);
	printf("\nEnthe the value of h = ");
	scanf("%d",&h);
	printf("\nEnthe the value of l = ");
	scanf("%d",&l);
	
	A = w*l + h*l + h*w;
	area = A*2;
	
	printf("\nArea of rectangular is = %d ",area);
	
		
	return 0;
}
