#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,j1,k,l,m,n,x,i1;
	scanf("%lld%lld",&n,&x);
	long long int a[x];
	for(i1=0;i1<x;i1++) a[i1]=0;
	long long int h_m=0,high=n,low=0,low_ele;
	for(i1=1;i1<=n;i1++)
	{
		scanf("%lld",&k);
        a[k%x]++;
        j=0;
        while(a[j%x]>0)
        	a[j++%x]--;
        printf("=%lld\n",j);
	}
	return 0;
}