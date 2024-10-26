//9. WAP to show difference between Structure and Union.
#include<stdio.h>
struct Employee 
{	
	int empno;
    char empname[100];
    float salary;
};

union Data
{
    int intValue;
    float floatValue;
    char charValue;
};

int main() 
{
    struct Employee emp1;
    emp1.empno = 51;
    snprintf(emp1.empname, sizeof(emp1.empname), "yuvraj");
    emp1.salary = 76000.76;

    printf("Structure Example");
    printf("\nEmployee Number: %d", emp1.empno);
    printf("\nEmployee Name: %s", emp1.empname);
    printf("\nEmployee Salary: %.2f", emp1.salary);
	printf("\nSize of structure: %zu bytes", sizeof(emp1));

    union Data data;
    data.intValue = 10;
    printf("\nUnion Example:");
    printf("\nUnion Integer Value: %d", data.intValue);

    data.floatValue = 15.75;
    printf("\nUnion Float Value: %.2f", data.floatValue);

    printf("\nUnion Integer Value after setting floatValue: %d", data.intValue);

    printf("\nSize of union: %zu bytes", sizeof(data));

    return 0;
}
