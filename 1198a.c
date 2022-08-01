#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int a[400001];
void sort(long long int beg,long long int end,long long int mid)
{
    long long int i=beg,j=mid+1,k=beg,c[400001];
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
long long int i,j,k,l,m,n,b,c[400001];
double f,g,h;
//printf("Enter the size of the array and no.of bytes\n");  
scanf("%64Id%64Id",&n,&b);
for(i=0;i<n;i++) scanf("%64Id",&a[i]);
b=b*8;
merg(0,n-1);j=-1;
for(i=0;i<n-1;i++)
{
    k=1;
    while(a[i]==a[i+1]){k++; i++;}
    c[++j]=k;
}
if(i==n-1) c[++j]=1;
long long int start=0,end=j;
k=0;
while(start!=end)
{ i=ceil(log(j+1)/log(2));
    if(i*n<=b)
    {
        printf("%64Id",k);
        break;
    }
    if(c[start]<=c[end]){k=k+c[start]; start++; j--;}
    else {k=k+c[end]; end--; j--;}
}
if(start==end) printf("%64Id",k);
return 0;
}