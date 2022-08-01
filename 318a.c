#include<stdio.h>
#include<math.h>
int main()
{
long long int i,j,k,l,m,n;
//printf("Enter the to numbers n,k\n");
scanf("%I64d%I64d",&n,&k);
if(n%2==0) l=n/2;
else l=(n/2)+1;
if(k>l)
{
  m=k-l;
  printf("%I64d",m*2);
}
else{
  m=k+(k-1);
  printf("%I64d",m);
}
return 0;
}
