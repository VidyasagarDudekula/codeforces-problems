#include<stdio.h>
#include<stdlib.h>
long long int a[100000];
void sort(long long int beg,long long int end,long long int mid)
{
    long long int i=beg,j=mid+1,k=beg,c[100000];
    while(i<=mid&&j<=end)
    {
        if(a[i]<a[j]) c[k++]=a[i++];
        else c[k++]=a[j++];
    }
    while(i<=mid) c[k++]=a[i++];
    while(j<=end) c[k++]=a[j++];
    for(i=beg;i<k;i++) a[i]=c[i];
}
void merg(long long int beg,long long int end)
{
    long long int m;
    if(beg<end)
    {
        m=(beg+end)/2;
        merg(beg,m);
        merg(m+1,end);
        sort(beg,end,m);
    }
}
int main()
{
	long long int i,j,k,l=0,m,n,c[100000];
    scanf("%lld",&n);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);
    merg(0,n-1);
    for(i=0;i<n;i++) printf("%lld",a[i]);
    if(n!=1){
    j=-1;l=0;
    long long int start=0,end=n-1;
    l=a[end]-a[start];
    for(i=n-2;i>0;i--)
    {
    	if(l==a[i]){ l=a[i]=0;}
    	else if(l>a[i]) {l=l-a[i];a[i]=0;}
    	else if(l<a[i]) {l=a[i]-l;a[i]=0;}
    }
    if(l!=0) printf("NO");
    else printf("YES");
    }
    else printf("NO");
    return 0;
}