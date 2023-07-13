#include<stdio.h>

void main()
{
	int i,j;
	int array[10][10];
	float average,sum=0;
	int r,c;
	
	printf("How many rows :- ");
	scanf("%d",&r);
	printf("How many colums :- ");
	scanf("%d",&c);
	
	
    printf("The elements in the matrix are: \n ");
    	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+array[i][j];
		}
	}
	average=sum/(r*c);
	printf("\nAverage of all the elements of the matrix = %.2f",average);

    
} 
