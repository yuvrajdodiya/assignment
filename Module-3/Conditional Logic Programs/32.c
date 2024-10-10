/*32.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\
*/
#include<stdio.h>
int main()
{
    int Bsalary, gs, hra, da;
    printf("\nEnter the Basic Salary: ");
    scanf("%d",&Bsalary);

    if(Bsalary<=10000)
    {
        hra = Bsalary*0.2;
        da = Bsalary*0.8;
        gs = Bsalary+hra+da;
    }
    else if(Bsalary<=20000)
    {
        hra =Bsalary*0.25;
        da = Bsalary*0.9;
        gs = Bsalary+hra+da;
    }
    else if(Bsalary>20000) {
        hra = Bsalary*0.3;
        da = Bsalary*0.95;
        gs = Bsalary+hra+da;
    }
    printf("\nBasic Salary = %d",Bsalary);
    printf("\nGross Salary = %d",gs);
    return 0;
}
