#include<stdio.h>
#include<stdlib.h>
void sort(long long int a[],long long int beg,long long int mid,long long int end)
{
    long long int i,j,k,c[100000];
    i=beg;
    j=mid+1;
    k=beg;
    while(i<=mid&&j<=end)
    {
        if(a[i]>a[j]) c[k++]=a[j++];
        else c[k++]=a[i++];
    }
    while(i<=mid) c[k++]=a[i++];
    while(j<=end) c[k++]=a[j++];
    for(i=beg;i<=end;i++)
    a[i]=c[i];
}
void merg(long long int a[],long long int beg,long long int end)
{
    long long int mid;
    mid=(end+beg)/2;
    if(beg<end)
    {
        merg(a,beg,mid);
        merg(a,mid+1,end);
        sort(a,beg,mid,end);
    }
}
int main()
{
  long long int i,j,k=-12,l=-13,m,n;
  //printf("Enter the number of elements\n");
  scanf("%lld",&n);
  long long int a[n],b[n-1],c[n-2];
  for(i=0;i<n;i++) scanf("%lld",&a[i]);
  merg(a,0,n-1);
  for(i=0;i<n-1;i++) scanf("%lld",&b[i]);
  merg(b,0,n-2);
  for(i=0;i<n-2;i++) scanf("%lld",&c[i]);
  merg(c,0,n-3);
  for(i=0;i<n;i++)
  {
    if(k==-12)
    {
      if(i==n-1) k=a[n-1];
      else if(i<=n-2){
        if(a[i]!=b[i]) k=a[i];
      }
    }
    if(l==-13)
    {
      if(i==n-2) l=b[n-2];
      else if(i<=n-3)
      {
        if(b[i]!=c[i]) l=b[i];
      }
    }
    if(l!=-13&&k!=-12) break;
  }
  printf("%lld\n%lld",k,l);
  return 0;
}
