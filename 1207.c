#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long long int i,j,k=0,l,m1,m2,m,n,c;
	double f;
	scanf("%lld",&n);
	for(i=0;n!=0;i++)
	{
		l=n%10;
		k=(l)*(pow(2,i))+k;
		n=n/10;
	}
	/*printf("%lld\n",k);
	printf("%f\n",log(k*3+1)/log(4));*/
	c=ceil(log(k*3+1)/log(4));
	m1=(pow(4,c-1)-1)/3;
    m2=(pow(4,c)-1)/3;
    if(m1<=k&&k<m2&&abs(k-m2)>1) printf("%lld",c-1);
    else printf("%lld",c);
	return 0;
}