/*17.Write a C program to check whether a triangle can be formed with the given
values for the angles.
*/
#include<stdio.h>
int main ()
{
	 int ang1, ang2, ang3, sum;
    printf("\nEnter 1st Angle: ");
    scanf("%d",&ang1);
    printf("\nEnter 2ns Angle: ");
    scanf("%d",&ang2);
    printf("\nEnter 3rd Angle: ");
    scanf("%d",&ang3);

    sum = ang1+ang2+ang3;
    
    if(sum == 180)
    {
		printf("\ncan form Triangle",ang1,ang2,ang3);
	}
    else
    {
    	printf("\ncan not form Triangle",ang1,ang2,ang3); 
	}
	return 0;
}
