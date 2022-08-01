#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,end,m,n,x,y,l1,l2,start,a[100000];
	scanf("%lld%lld%lld",&n,&x,&y);
	end=x+y;start=x-1;
	for(i=0;i<n;i++)
	{scanf("%lld",&a[i]);
		if(i>=start)
		{
			if(i>end||i==n-1) {
				if(i==n-1)
				{
				if(a[l1]>a[i])
			    {
				   l2=l1;l1=i;
			    }
				}
			printf("%lld",l1+1);
			break;}
		}
		if(i<=end)
		{
			if(i==0) l1=i;
			else if(a[l1]>a[i])
			{
				l2=l1;l1=i;start=i;
				end=start+y;
			}
		}
	}
	return 0;
}