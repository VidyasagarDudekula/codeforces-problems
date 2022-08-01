#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,m=1,n,t;
	l=1;
	printf("Enter the number's n and t\n");
	scanf("%lld%lld",&n,&t);
	for(i=1;i<n;i++)
	{scanf("%lld",&k);
      if(l==t&&m==1) {printf("YES"); m=22;}
      if(l==i) l=i+k;
	}
	if(m==1&&l==t) {printf("YES"); m=22;}
	if(m==1) printf("NO");
	return 0;
}