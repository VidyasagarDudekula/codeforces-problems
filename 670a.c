#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long int i,j,k,l,m,n,max=0,min=0;
  //printf("enter the number\n");
  scanf("%lld",&n);
  if(n%7==0) min=max=(n/7)*2;
  else {
    l=n/7;
    m=n%7;l=l*2;
    min=l;
    if(m==6) min++;
    if(m>1) l=l+2;
    else l++;
    max=l;
  }
  printf("%lld %lld",min,max);
}
