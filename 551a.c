#include<stdio.h>
#include<stdlib.h>
long long int a[10000],b[10000],n;
void sort(long long int beg,long long int mid,long long int end)
{
    long long int i,j,k,c[10000];
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
void merg(long long int beg,long long int end)
{
    long long int mid;
    mid=(end+beg)/2;
    if(beg<end)
    {
        merg(beg,mid);
        merg(mid+1,end);
        sort(beg,mid,end);
    }
}
int bin(long long int beg,long long int end,long long int se)
{long long int mid;
  if(beg<=end)
  {
    mid=(beg+end)/2;
    if(a[mid]==se)
    {
      while(mid<n-1)
      {//printf("mid=%lld\na[mid+1]=%lld\na[mid]=%lld\n",mid,a[mid+1],a[mid]);
        if(a[mid+1]==a[mid]) mid++;
        else break;
      }
      return (n-mid);
    }
    else if(a[mid]<se) bin(mid+1,end,se);
    else if(a[mid]>se) bin(beg,mid-1,se);
  }
}
int main()
{
  long long int i,k,j,l,m;
  //printf("Enter the number of elemnts\n");
  scanf("%lld",&n);
  //printf("Enter the elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%lld",&b[i]);
    a[i]=b[i];
  }
  merg(0,n-1);
  for(i=0;i<n;i++)
  {
    l=bin(0,n-1,b[i]);
    b[i]=l;
  }
  //for(i=0;i<n;i++) printf("%lld ",a[i]);
  for(i=0;i<n;i++) printf("%lld ",b[i]);
  return 0;
}
