#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int i,j,k,l,n,count=0;
    scanf("%lld",&l);
    for(i=0;i<l;i++){count=0;
    scanf("%lld%lld",&n,&k);
    while(n!=0)
    {
        n--;
        if(n%k==0&&n!=0) n=n/k;
        count++;
    }printf("%lld\n",count);
    }
    return 0;
}