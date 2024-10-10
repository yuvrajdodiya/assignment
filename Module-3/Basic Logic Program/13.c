/*13.Find character value from ascii*/
#include<stdio.h>
int main ()
{
	int asciivalue ;
	char ch;
	printf("\nEnthe the ch = ");
	scanf("%c ",&asciivalue);
	
	
	if(asciivalue>=65 && asciivalue<= 127)
	{
		ch = (int)asciivalue;
		printf("\nThe asciivalue for chatacter %c is %d ",asciivalue,ch);
	}
	else 
	{
		printf("\please enter the valid character ");
	}
	return 0;
}
