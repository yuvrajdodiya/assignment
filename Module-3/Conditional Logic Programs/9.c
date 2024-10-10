/*9. C Program to Check Uppercase or Lowercase or Digit or Special
Character*/
#include<stdio.h>
int main ()
{
	char ch;
    printf("\nEnter the Character = ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
    	printf("\n%c  Uppercase letter",ch);
    }
    else if(ch>=97 && ch<=122)
    {
		printf("\n%c  Lowercase letter ",ch);
	}
	else if(ch>=48 && ch<=57)
  	{
  		printf("\n%c Digit.",ch);
	}
    else
    {
    	printf("\n%c Special Character ",ch);
	}
	return 0;
}
