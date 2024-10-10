/*12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/
#include<stdio.h>
int main ()
{
	int std,a=5,apples;
	
	printf("\nEnter the num of students = ");
	scanf("%d",&std);
	
	apples  = std * a;
	
	printf("\napples are required are = %d",apples);
	
	return 0;
}
