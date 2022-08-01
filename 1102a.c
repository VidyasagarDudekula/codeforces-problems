#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long int i,j,k,l,m,n;
  //printf("Enter\n");
  scanf("%lld",&n);
  if(n%2==0)
  {l=n/2;
    if(l%2==0) printf("0");
    else printf("1");
  }
  else if(n%2!=0)
  {
    l=(n/2)+1;
    printf("%lld",n-l-1);
  }
}
