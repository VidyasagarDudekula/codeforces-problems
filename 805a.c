#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  long long int i,r,j,k,l,m,n,max=-1,max_e=0,first,second,h;
  //printf("Enter the number's that l and r\n");
  scanf("%lld%lld",&l,&r);
  for(i=2;i<=r;i++)
  {
    j=first=second=0;
    if(l%i==0) k=l/i;
    else{
      m=l/i; m=(m*i)+i;
      if(m<=r) k=(m)/i;
      else k=0;
    }
    first=k;
    if(first!=0){
    if(r%i==0) k=r/i;
    else{
      m=r/i; m=m*i;
      if(m>=l) k=m/i;
      else k=0;
    }
    second=k;
  }
  h=(second-first)+1;
  if(h>max)
  {
    max=h;max_e=i;
  }
  }
  printf("%lld\n",max_e);
  return 0;
}
