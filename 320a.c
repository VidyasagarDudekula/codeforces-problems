#include<stdio.h>
#include<stdlib.h>
long long int m;
void check(long long int n)
{
  int i=0,j=0,b;
  for(i=1;i<=3;i++)
  {
    if(n!=0) b=n%10;
    if(b==4) j++;
    n=n/10;
  }
  if(j==3) m--;
}
int main()
{
  long long int i,h,j,k,l,n;
  //printf("enter element\n");
  scanf("%lld",&n);
  k=n;i=0;m=2;j=0;
  while(k!=0)
  {h=k%10;
    if(h!=1&&h!=4) m--;
    if(h==4) check(k);
    l=k;k=k/10;}
    if(l==1) m++;
    if(m==3) printf("YES");
    else printf("NO");
    return 0;
}
