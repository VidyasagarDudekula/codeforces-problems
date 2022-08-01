#include<stdio.h>
#include<stdio.h>
int main()
{
	long long int i,j,k,l,m,n,a[100000],b[100000],g;
	//printf("enter the number of elements u want to enter\n");
	scanf("%lld",&n);b[0]=0;
	//printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i+1]=b[i]+a[i];
	}
	//printf("enter the number of quers\n");
	scanf("%lld",&g);
	for(i=0;i<g;i++)
	{
		scanf("%lld%lld",&k,&l);
		//printf("b[k-1]=%lld\nb[l]=%lld\n",b[k-1],b[l]);
		printf("%lld\n",(b[l]-b[k-1])/10);
	}
	return 0;
}