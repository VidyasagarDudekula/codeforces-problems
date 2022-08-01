#include<stdio.h>
#include<stdlib.h>
int a[200000];
int main()
{
    long long int i,j,k,l,count=0,m,n,x,y;
    scanf("%lld%lld%lld",&n,&x,&y);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);
    for(i=0;i<=x;i++)
    {
      if(i==y)
      {
        if(a[n-1-i]!=1) count++;
      }
      else if(i==x)
      {
        if(a[n-1-i]!=1) count++;
      }
      else
      {
        if(a[n-1-i]!=0) count++;
      }
    }
    printf("%lld",count);
    return 0;
}
