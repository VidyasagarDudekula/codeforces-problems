#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k=0,end,c=0,n,x,y,l,l2,start,a[100000];
	scanf("%lld%lld%lld",&n,&x,&y);
	end=y;start=x-1;
	for(i=0;i<n;i++)
	{if(i==0) l=i;
		scanf("%lld",&a[i]);
		if(a[l]>a[i])
		{
			c=0;
			end=i+y;
			l=i;
		}
		if(i==end) {printf("%lld",l+1); c=1;k=1;}
		if(c==0)
		{
			if(end>=n&&i==n-1) {printf("%lld",l+1);
			k=1;}
		}
		if(k==0) c=0;
		if(k==1) break;
	}
	return 0;
}