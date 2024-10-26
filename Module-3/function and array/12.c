//12.WAP to accept 5 students name and store it in array
#include <stdio.h>
int main()
{   
	char student[5][20];
    int i;

    printf("\nEnter the student name = \n");
    for (i = 0; i < 5; i++)
    {
        printf("Student[%d]: ", i + 1);
        scanf("%s", &student[i]);
    }

    printf("\nList of Students \n");
    for (i = 0; i < 5; i++)
    {
        printf("Student[%d]: %s\n", i + 1, student[i]);
    }
    return 0;
}
