//26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
#include<conio.h>
int main()
{
    int fahreanheit, celsius;
	printf("Enter the value of Fahrenheit: ");
    scanf("%d",&fahreanheit);

    celsius = (fahreanheit-32)*(5/9);
    
    
    printf("\nFahrenheit: %d",fahreanheit);
    printf("\nCelsius: %d",celsius);

    return 0;
}
