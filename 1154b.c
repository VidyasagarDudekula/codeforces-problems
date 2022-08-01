#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long int i,j,k,l,m=0,n,max=0,min=0,mid=-2,a[1000];
  //printf("Enter thge number of elements u want to enter\n");
  scanf("%lld",&n);
  //printf("Enter the array\n");
  for(i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);k=a[i];
    if(k>max)
    {
      mid=max;max=k;
    }
    if(i==0) min=k;
    if(k<min)
    {
      mid=min;min=k;
    }
    printf("min=%lld\nmid=%lld\nmax=%lld\n",min,mid,max);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]!=min&&a[i]!=mid&&a[i]!=max){m=12; break;}
  }
  if(m!=12){
  if(n<2) printf("0");
  else if(mid==min||mid==max)
  {
    k=(max+min)/2;
    if(k-min==max-k) printf("%lld",k-min);
    else printf("%lld",k);
  }
  else
  {
    if(mid-min==max-mid) printf("%lld",mid-min);
    else if(min==max) printf("0");
    else printf("-1");
  }
}
else printf("-1");
  return 0;
}
