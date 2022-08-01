#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n,h[999],idx[999];
	char str[1000];
	printf("enter the string that u want to enter\n");
	scanf("%s",str);
	n=strlen(str);
	k=0;m=0;j=0;l=0;
	for(i=0;i<n;i++)
	{
		if(str[i]!='b')
		{
			m=1;
			k++;
		}
		else if(str[i]!='a')
		{
			if(m==1)
			{
				h[j++]=k;
				idx[l++]=i-1;
				m=0;k=0;
			}
		}
	}
	l=100000;
	for(i=1;i<j;i++)
	{
		
	}
	return 0;
}