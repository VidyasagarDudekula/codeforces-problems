#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int x,y;
int gcd(int i,int j)
{
    int count=0,k,l,m=1;
    k=i;
    l=j;
    while(m<=sqrt(l))
    {
        if(k%m==0&&l%m==0) count++;
        if(count>1) break;
        m++;
    }
    if(count==1){
        x=i;
        y=j;
        return 1;
    }
    else return 2;
}
int main()
{
    int n,i,j,k,l=0,m;
    printf("enter\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        i=n/2-1;
        j=n/2+1;
    }    
    else
    {
        i=n/2;
        j=n/2+1;
    }
    while(i!=0&&j!=n)
    {
        k=gcd(i,j);
        if(k==1) break;
        i--;
        j++;    
    }
    printf("%d %d",x,y);
    return 0;
}