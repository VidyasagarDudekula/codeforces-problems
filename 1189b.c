#include<stdio.h>
#include<stdlib.h>
long long int a[100000];
void sort(long long int,long long int,long long int);
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
void sort(long long int beg,long long int mid,long long int end)
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
int main()
{
long long int i,j,k,l,m,n;
printf("enter the number of elements u want to enter\n");
scanf("%lld",&n);
printf("enter the array\n");
for(i=0;i<n;i++) scanf("%lld",&a[i]);
merg(0,n-1);
k=1;i=0;
if(a[n-1]>=(a[n-2]+a[0]))
{
  l=a[n-2];a[n-2]=a[n-1];a[n-1]=l;
}
if(a[n-2]>=(a[n-1]+a[n-3])) printf("NO");
else {printf("YES\n");
  for(i=0;i<n;i++) printf("%lld ",a[i]);}
return 0;
}
