#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,m,n,a,b;
	printf("Enter the verda location points, and no.of steps to reach\n");
	scanf("%I64d%I64d%I64d",&a,&b,&n);
	if(a<0) a=a*(-1);
	if(b<0) b=b*(-1);
	if(a+b<=n&&(n-(a+b))%2==0) printf("YES");
	else printf("NO");
	return 0;
}