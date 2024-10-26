//5. WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice
#include <stdio.h>
void ascending(int[],int);
void desceding(int[],int);
int main()
{
    int size,a[100],choice,i,j;
    printf("\nEnter the size of an array: ");
    scanf("%d",&size);

    printf("\n");
    for (i=0;i<size;i++)
    {
        printf("Element[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("\nChoices\n");
    printf("1) Asceding order");
    printf("\n2)  Desceding order");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
	    case 1:
	        ascending(a, size);
	        break;

	    case 2:
	        descending(a, size);
	        break;

	    default:
	        break;
    }

    return 0;
}

void ascending(int a[], int size)
{
    int i, j, temp;
    printf("\nOriginal array =  ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nAcending ordered array = ");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
void descending(int a[], int size)
{
    int i, j, temp;
    printf("\nOriginal array =  ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nDecending ordered array = ");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

