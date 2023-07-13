#include<stdio.h>

void main()
{
    int array[10][10];
    int i,j,row,col,sum=0;
    
	printf("Enter number of rows : \n");
    scanf("%d",&row);
    
	printf("Enter number of colums : \n");
    scanf("%d",&col);
    
    printf("Enter arrays elements: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+array[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of an array = %d\n",sum);
}


