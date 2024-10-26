//15. Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include<string.h>
int main()
{
	char x[100],y[10][20];
	int i,j=0,l=0,m=0,n=0,max,min;
	
	printf("Enter string :");
	gets(x);
	
	for(i=0; x[i] != '\0'; i++)
	{
		if(x[i] == ' ')
		{
			y[l][j]='\0';
			l++;
			j=0;
		}
		else
		{
			y[l][j]=x[i];
			j++;
		}
	}
	y[l][j] ='\0';
	
	max=strlen(y[0]);
    min=strlen(y[0]);
	
	for(i=0;i<=l;i++)
	{
		if (max<strlen(y[i]))
        {
            max=strlen(y[i]);
            m=i;
        }
	 if(min>strlen(y[i]))
        {
            min=strlen(y[i]);
            n=i;
        }
	}
	printf("\nLargest  string is = %s \nsmallest string is  = %s",y[m],y[n]);
	
	return 0;
}
