#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  long long int i,j,k,l,m,n,t,h;
  //printf("Enter the number of test cases \n");
  scanf("%lld",&t);
  for(h=0;h<t;h++)
  {
    //printf("Enter the number for n\n");
    scanf("%lld",&n);
    if(n!=1){
    l=m=2;i=0;
    while(1)
    { if(m<=n) i++;
      else break;
      m=m+m;
    }j=pow(2,i);
    //printf("%lld\n",i);
    k=((n*(n+1))/2)-2*((2*(1-j))/(-1));
    k=k-2;
    printf("%lld\n",k);
  }
  else printf("-1\n");
  }
  return 0;
}
