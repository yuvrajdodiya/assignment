/*16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
int main()
{
	
    int centigrade;
    printf("\nEnter the Centigrade: ");
    scanf("%d",&centigrade);

    if(centigrade<0)
    {
		printf("\nFreezing Weather");
	}
    else if(centigrade>=0 && centigrade<10)
    {
		printf("\nVery Cold Weather");
	}
    else if(centigrade>=10 && centigrade<20)
    {
		printf("\nCold Weather");
	}
    else if(centigrade>=20 && centigrade<30)
    { 
		printf("\nNormal Temperature");
	}
    else if(centigrade>=30 && centigrade<40)
    {
    	printf("\nHot Weather");
	}
    else if(centigrade>=40)
	{
    	printf("\nVery Hot Weathe");
	}
	return 0;
}
