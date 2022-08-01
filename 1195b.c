#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int i,j,k,l,m,n,f1,f2,b,c;
    scanf("%lld%lld",&n,&k);
    b=-2*n-3;
    c=(n+(n*n))-(2*k);
    f1=(-b+sqrt(b*b-4*c))/2;
    f2=(-b-sqrt(b*b-4*c))/2;
    if(f1<n) printf("%lld\n",f1);
    else  printf("%lld",f2);
    return 0; 
}