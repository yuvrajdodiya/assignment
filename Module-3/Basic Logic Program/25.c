//25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main()
{
	int i,expense[5];
	float sum,average;
	
	printf("\nEnter 5 expense ");
	
	for(i=0;i< 5;i++)
	{
		printf("\n expense  %d = ",i + 1);
		scanf("%d",&expense[i]);
		
		sum += expense[i];
		
	}
	 average = sum /5;
	 printf("\nValue of expense average is %.2f ",average);
	return 0;
}
