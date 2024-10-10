//14.Find ascii value of given number

#include<stdio.h>
int main ()
{
	int asciivalue ;
	char ch;
	printf("\nEnthe the asciivalue = ");
	scanf("%d",&asciivalue);
	
	
	if(asciivalue>=0 && asciivalue<= 127)
	{
		ch = (char)asciivalue;
		printf("\nThe character for asciivalue %d is %c ",asciivalue,ch);
	}
	else 
	{
		printf("\please enter the valid asciivalue ");
	}
	return 0;
}
