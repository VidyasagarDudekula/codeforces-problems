#include<stdio.h>
#include<stdlib.h>
long long int a[100000];
void sort(long long int beg,long long int mid,long long int end)
{
  long long int i,j,k,c[100000];
  i=beg,k=beg,j=mid+1;
  while(i<=mid&&j<=end)
  {
    if(a[i]<a[j]) c[k++]=a[i++];
    else c[k++]=a[j++];
  }
  while(i<=mid) c[k++]=a[i++];
  while(j<=end) c[k++]=a[j++];
  for(i=beg;i<=end;i++) a[i]=c[i];
}
void merg(long long int beg,long long int end)
{
  long long int mid;
  mid=(beg+end)/2;
  if(beg<end)
  {
    merg(beg,mid);
    merg(mid+1,end);
    sort(beg,mid,end);
  }
}
int main()
{
long long int i_q,i,j,k,l,m,n_q,n;
//printf("enter the number of queryes\n");
scanf("%lld",&n_q);
for(i_q=0;i_q<n_q;i_q++)
{
  scanf("%lld",&n);
  //printf("Enter the elements \n" );
  for(i=0;i<n;i++) scanf("%lld",&a[i]);
  merg(0,n-1);
  //printf("sort order\n");
  //for(i=0;i<n;i++) printf("%lld ",a[i]);
  k=a[n-1];l=a[n-2];
  m=n-2;
  j=n-2;
  while(j+1>=l&&j>=0) j--;
  if(j>=m) j--;
  printf("%lld",j+1);
  printf("\n");
}
return 0;
}
