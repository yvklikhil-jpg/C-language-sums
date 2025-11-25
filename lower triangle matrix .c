//write a c programe to check the given matrix is lower triangle matrix or not
#include<stdio.h>
int main()
{
	int m[10][10],n,i,j;
	printf("enter order of matrix:");
	scanf("%d",&n);
	printf("enter the elements of matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&m[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(m[i][j]!=0)
			{
				printf("given matrix is  lower triangle matrix\n");
				return 0;
			}
		}	
	}
	printf("given matrix is not lower triangle matrix\n");
	return 0;
}

