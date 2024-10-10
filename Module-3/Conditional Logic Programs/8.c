/*8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/
#include <stdio.h>
int main()
{
    float height;
 
    printf("\nEnter the Height = ");
    scanf("%f", &height);
    
    if (height > 165.0 && height <= 195.0)
    {
        printf("\ntaller");
	}
    else if (height >= 150.0 && height <= 165.0)
    { 
		printf("\naverage Height");
	}
    else
    {
	    printf("\nnormal height");
	}
    return 0;
}

