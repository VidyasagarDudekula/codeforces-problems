#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n;
    printf("enter the number \n");
    scanf("%d%d",&n,&m);
    if(m*2<=n&&m!=0) printf("%d",m);
    else if(m==0) printf("1");
    else printf("%d",n-m);
    return 0;
}