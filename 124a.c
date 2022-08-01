#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,m,n,a,b;
	printf("Enter the number of number if people, front and not more than behind people\n");
	scanf("%lld%lld%lld",&n,&a,&b);
	if(n-a>=b+1) printf("%lld",b+1);
	else printf("%lld",n-a);
	return 0;
}