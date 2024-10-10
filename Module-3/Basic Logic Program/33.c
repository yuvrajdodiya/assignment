//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
#include<math.h>
int main()
{
	int num,power1,power2,power3;
	printf("\nEnter the an integer = ");
	scanf("%d",&num);
	
	power1 = pow(num,1);
	power2 = pow(num,2);
	power3 = pow(num,3);
	
	printf("\nThe integer id %d are = %d,%d,%d",num,power1,power2,power3);
	return 0;
}
