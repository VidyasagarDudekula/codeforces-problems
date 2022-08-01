#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t!=0)
	{
		long long i,j,k,l,m,n,ang;
		double f,f1;
		scanf("%lld",&ang);
		for(i=3;i<100000;i++)
		{
			f=i*1.0;
			f1=(ang*1.0)/(180/f);
			k=f1;
			if(k*1.0==f1&&k<=i-2) {printf("%lld\n",i);break;}
		}
		t--;
	}
	return 0;
}