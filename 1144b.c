#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int a[10000];
void sort(long long int beg,long long int end,long long int mid)
{
    long long int i,j,k,b[10000];
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
    long long int i,j,k=0,l,m=0,n,e=0,o=0;
    printf("enter the number\n");
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]%2==0) e++;
        else o++;
    }
    if(e==o) printf("0");
    else if(e>o)
    {
       merg(0,n-1);
       l=e-1-o;
       for(i=0;i<n;i++)
       {
           if(a[i]%2==0&&k<l) 
           {
               m=m+a[i];k++;
           }
           if(k>l) break;
       }
    }
    else if(e<o)
    {
        merg(0,n-1);
       l=o-1-e;
       for(i=0;i<n;i++)
       {
           if(a[i]%2!=0&&k<l) 
           {
               m=m+a[i];k++;
           }
           if(k>l) break;
       }
    }
    printf("%lld",m);
    return 0;
}