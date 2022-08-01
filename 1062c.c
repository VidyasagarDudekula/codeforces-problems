#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long long int i,j,k,l,m,n,q,a_0,a_1;
	char a_d[100000];
	long long int a[100000];
	scanf("%lld%lld",&n,&q);
	scanf("%s",a_d);
	long long int c=0;
	for(i=0;a_d[i]!='\0';i++)
	{
		if(a_d[i]=='1') a[i]=++c;
		else a[i]=c;
		//printf("a[i]=%lld\n",a[i]);
	}
	while(q!=0)
	{a_0=0;a_1=0;
		scanf("%lld%lld",&k,&l);
		k=k-2;
		l=l-1;
		if(k<0) {k=0; m=l+1; a_1=a[l];}
		else {m=l-k; a_1=a[l]-a[k];}
		//printf("k=%lld\nl=%lld\nm=%lld\n",k,l,m);
		a_0=m-a_1;
		k=pow(2,a_1)-1;
		l=k*(pow(2,a_0)-1);
		//printf("k=%lld\nl=%lld\n",k,l);
		printf("%lld\n",k+l);
		q--;
	}
	return 0;
}