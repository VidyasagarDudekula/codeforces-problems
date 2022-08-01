#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n;
	char s[10],s1[10];
	scanf("%s",s);
	scanf("%s",s1);
	l=strcmp(s,s1);
	printf("%d",l);
	return 0;
}