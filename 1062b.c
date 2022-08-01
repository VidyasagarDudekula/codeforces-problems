#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int min_n(long long int num)
{
	
}
int main()
{
	long long int i,j,k,l,m,n;
	scanf("%lld",&n);
	k=n;
	while(1)
	{
		k=min_n(k);
		if(k<=n) break;
	}
	printf("%lld",k);
	return 0;
}