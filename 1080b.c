#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int i,j,k,l,m,n,x,y,b;
    printf("enter the number\n");
    scanf("%lld",&b);
    for(i=0;i<b;i++)
    {k=0;
        scanf("%lld%lld",&m,&n);
        if(m%2==0) x=m+1;
        else x=m;
        if(n%2==0) y=n-1;
        else y=n;
        j=((y-x)/2)+1;
        k=(j)*(x+y)/2;
        l=n*(n+1)/2-((m-1)*m/2)-2*k;
        printf("%lld\n",l);
    }
    return 0;
}