#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int i,n,l,x,y,temp_x=0,temp_y=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&x,&y);
        if(i==0){ l=x+y;
        temp_x=x;
        temp_y=y;}
        if(l<x+y) { l=x+y;
        temp_x=x;
        temp_y=y;
        }
    }
    printf("%lld",temp_x+temp_y);
    return 0;
}