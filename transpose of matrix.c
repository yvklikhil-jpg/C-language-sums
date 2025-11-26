//WACP to find transpose of given matrix
#include<stdio.h>
int main()
{
	int A[10][10],T[10][10],i,j,r,c;
	printf("enter the order of matrix:");
	scanf("%d%d",&r,&c);
	printf("enetr elements of matrix A\n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&A[i][j]);
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		T[i][j]=A[j][i];
	}
	printf("after transpose matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		printf("%d\t",T[i][j]);
		printf("\n");
	}
	return 0;
	
	
	
}
