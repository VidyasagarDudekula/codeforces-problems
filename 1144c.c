#include<stdio.h>
#include<stdlib.h>
long long int a[200000];
void sort(long long int beg,long long int end,long long int mid)
{
    long long int i,j,k,b[200000];
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
    long long int i,j,k=0,l,m=0,n,d_n,i_n,b[100000];
    //printf("Enter the numbuer\n");
    scanf("%lld\n",&n);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);
    merg(0,n-1);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i]!=0){
            printf("NO");
            k=8;
            break;
        }
        else if(a[i]==a[i+1]) 
        {
            b[m]=a[i];
            a[i]=-1;
            m++;
        }
    }
    if(k!=8)
    {
        printf("YES\n");
        printf("%lld\n",m);
        for(i=0;i<m;i++) printf("%lld ",b[i]);
        printf("\n");
        printf("%lld\n",n-m);
        for(i=n-1;i>=0;i--)
        {
            if(a[i]!=-1) printf("%lld ",a[i]);
        }
    }
    return 0;
}