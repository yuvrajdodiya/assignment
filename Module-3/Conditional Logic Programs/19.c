/*19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow 
20. Unit
21. Charge/unit
22. upto 350 
23. @1.20
24. 350 and above but less than 600 
25. @1.50
26. 600 and above but less than 800 
27. @1.80
28. 800 and above 
29. @2.00
If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-
:*/
#include<stdio.h>
int main()
{
    int cusid;
    float unit, total;
    char cusname[20];

    printf("\nEnter the Customer ID: ");
    scanf("%d",&cusid);
    printf("Enter the Customer Name: ");
    scanf("%s",&cusname);
    printf("Enter the Units consumed by the customer: ");
    scanf("%f",&unit);

    if(unit<350)
    {
    	total = unit*1.2;
    else if(unit>=350 && unit<600)
    {
		total = unit*1.5;
	}
    else if(unit>=600 && unit<800)
    {
    	total = unit*1.8;
	}
    else if(unit>=800)
    {
    	total = unit*2;
	}
	if(total>800)
	{
    	total += total*0.18;
	}
    else if(total<=256)
    {
      printf("\nBill must be greater than Rs.256");
      return 0;
    }

    printf("\nElectricity Bill Details...\n");
    printf("Customer ID: %d",cusid);
    printf("\nCustomer Name: %s",cusname);
    printf("\nUnits consumed by the Customer: %f units",unit);

    printf("\n\nTotal Amount to be paid: Rs.%f",total);

    return 0;
}
