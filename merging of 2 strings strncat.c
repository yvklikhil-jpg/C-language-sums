#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[]="hello";
	char s2[]="world";
	puts(s1);
	strncat(s1,s2,3);
	puts(s1);
	return 0;
}

