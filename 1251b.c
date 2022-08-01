#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,q,n,in_risk=0,rescue=0,sum_1,sum_0;
	char s[50][52];
	//printf("enter number of queries\n");
	scanf("%d",&q);
	while(q!=0)
	{
		//printf("Enter the number of strings\n");
		scanf("%d",&n);
		in_risk=0;
		rescue=0;
		for(i=0;i<n;i++)
		{sum_1=0,sum_0=0;
			scanf("%s",s[i]);
			k=0;
			while(s[i][k]!='\0')
			{
				if(s[i][k]=='0') sum_0++;
				else sum_1++;
				k++;
			}
			if((sum_1+sum_0)%2!=0) rescue++;
			if(sum_1%2!=0&&sum_0%2!=0) in_risk++; 
		}
		if(rescue==0){if(in_risk%2!=0) printf("%d\n",n-1);
	     else printf("%d\n",n);}
		else printf("%d\n",n);
		q--;
	}
	return 0;
}