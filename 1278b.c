#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long long int i,j,k,l,m,n1,n2;
	//printf("Enter the two numbers\n");
	scanf("%lld",&j);
	for(i=0;i<j;i++)
	{
	scanf("%lld%lld",&n1,&n2);
	if(n1>n2)
	{
		l=n1;
		n1=n2;
		n2=l;
	}
	l=abs(n1-n2);
	if(n1!=n2)
	{
		k=(-1+(sqrt(1+(4*2*l))))/2;
		if((k*(k+1))/2==l) printf("%lld\n",k);
		else{
			n1=n1+((k*(k+1))/2);
			l=n2-n1;
			k=k+l*2;
			printf("%lld\n",k);
		}
	}
	else printf("0\n");
    }
	return 0;
}