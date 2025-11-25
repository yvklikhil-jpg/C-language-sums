#include<stdio.h>
void fact(int);
int main()
{
	int n;
	scanf("%d",&n);
	fact(n);
	return 0;
	
}
void fact(int n)
{
	int i,f=1;
	for(i=2;i<=n;i++)
	f=f*i;printf("%d!=%d\n",n,f);
	
}
