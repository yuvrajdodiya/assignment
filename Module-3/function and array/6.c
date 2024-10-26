//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>
void add(int[20][20],int[20][20],int[20][20],int);
void sub(int[20][20],int[20][20],int[20][20],int);
void mul(int[20][20],int[20][20],int[20][20],int);
int main()
{
	int size, i, j, choice, k;
	int math1[20][20], math2[20][20], ans[20][20];

	printf("\nEnter the size of an array: ");
	scanf("%d", &size);

	printf("\n");
	for (i=0;i<size;i++)
	{
		for (j=0;j<size;j++)
		{
			printf("Matrix1[%d][%d] = ",i,j);
			scanf("%d",&math1[i][j]);
		}
	}
	printf("\n");
	for (i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("Matrix2[%d][%d] = ",i,j);
			scanf("%d",&math2[i][j]);
		}
	}

	printf("\nMatrix1...\n");
	for (i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d",math1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix2...\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d",math2[i][j]);
		}
		printf("\n");
	}

	printf("\nChoices...");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n\nEnter your Choice = ");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1:
			add(math1, math2, ans, size);
			break;
	
		case 2:
			sub(math1, math2, ans, size);
			break;
	
		case 3:
			mul(math1, math2, ans, size);
			break;
	}

	return 0;
}

void add(int math1[20][20], int math2[20][20], int ans[20][20], int size)
{
	int i, j;
	for (i=0;i<size;i++)
	{
		for (j=0; j<size; j++)
		{
			ans[i][j] = math1[i][j] + math2[i][j];
		}
	}
	printf("\nAddition...\n");
	for (i=0; i<size;i++)
	{
		for (j=0; j<size; j++)
		{
			printf("%d",ans[i][j]);
		}
		printf("\n");
	}
}
void sub(int math1[20][20], int math2[20][20], int ans[20][20], int size)
{
	int i,j;
	for (i=0;i<size;i++)
	{
		for (j=0;j<size;j++)
		{
			ans[i][j] = math1[i][j] - math2[i][j];
		}
	}
	printf("\nSubtraction\n");
	for (i=0; i<size; i++)
	{
		for (j=0;j<size;j++)
		{
			printf("%d",ans[i][j]);
		}
		printf("\n");
	}
}
void mul(int math1[20][20], int math2[20][20], int ans[20][20], int size)
{
	int i,j;
	for (i=0; i<size; i++)
	{
		for (j=0; j<size; j++)
		{
			ans[i][j] = math1[i][j] * math2[i][j];
		}
	}
	printf("\nMaultiplication \n");
	for (i=0; i<size; i++)
	{
		for (j=0; j<size; j++)
		{
			printf("%d", ans[i][j]);
		}
		printf("\n");
	}
}

