#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int i,j,k,c=1,n;
    scanf("%lld",&n);
    i=10-(n%10);
    n=n+i;
    c=c+i;
    while(n!=1)
    {
        while(n%10==0)
        {
            n=n/10;
        }
        if(n!=1){i=10-(n%10);
        n=n+i;
        c=c+i;}
    }
    printf("%lld",c);
    return 0;
}