#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,i,j,k,l=1;
	printf("Enter the number of clints\n");
	scanf("%lld",&n);
	long long int h[n],m[n];
	for(i=0;i<n;i++) scanf("%lld%lld",&h[i],&m[i]);
	i=0;l=1;k=1;
    while(i!=n-1)
    {
    	k=1;j=k;
    	while(h[i]==h[i+1]&&m[i]==m[i+1]&&i!=n-1)
    	{
    		i++;k++;//printf("%lld\n",k);
    	}
    	if(j==k) i++;
    	if(k>l) l=k;
    }
	printf("%lld",l);
	return 0;
}