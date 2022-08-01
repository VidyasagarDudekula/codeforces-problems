#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int a[1000];
void sort(long long int beg,long long int end,long long int mid)
{
    long long int i,j,k,b[1000];
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
int bin(long long int beg,long long int end,long long int se)
{
    long long int mid;
    mid=(beg+end)/2;
    if(se<a[beg]||se>a[end]) return 2;
    else if(se==a[mid]) return 1;
    else if(se<a[mid]) return(bin(beg,mid-1,se));
    else if(se>a[mid]) return(bin(mid+1,end,se));
}
int main()
{
    long long int i,j,k=1,l,m=0,n,t,b=0,count=0;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {b=0;
        scanf("%lld",&n);
        for(j=0;j<n;j++){ scanf("%lld",&a[j]);}
        merg(0,n-1);
            m=a[n-1]*a[0];
        for(j=1;j<=m/2;j++)
        {
            if(m%j==0&&j!=1) l=bin(0,n-1,j);
            if(l==2) b=1;
        }
        if(b==0) printf("%lld\n",m);
        else printf("-1\n");
    }
    return 0;
}