#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j=0,k,l,m,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){ j=j+i+(n-i)*(i-1);
    //printf("%d\n",j);
    }
    printf("%d",j);
    return 0;
}