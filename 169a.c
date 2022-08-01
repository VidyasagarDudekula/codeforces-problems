#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int a[10000000];
void sort(long long int beg,long long int end,long long int mid)
{
    long long int i,j,k,b[1000000];
    k=beg;
    i=beg;
    j=mid+1;
    while(i<=mid&&j<=end)
    {
        if(a[i]>a[j]) b[k++]=a[j++];
        else b[k++]=a[i++];
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=end) b[k++]=a[j++];
    for(i=beg;i<=end;i++) a[i]=b[i];
}
void merg(long long int i,long long int j)
{
    long long int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        merg(i,mid);
        merg(mid+1,j);
        sort(i,j,mid);
    }
}
int main()
{
   long long int i,j,k,l,m,p,v,n;
   scanf("%lld%lld%lld",&n,&p,&v);
   printf("enter the elemets \n");
   for(i=0;i<n;i++) scanf("%d",&a[i]);
   merg(0,n-1);
   if(a[v-1]==a[v]) printf("0");
   else {
       l=a[v]-a[v-1];
       printf("%lld",l);
   }
   return 0;
}