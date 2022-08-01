#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i=-1,j=1,k1,k2,l,m,a[100];
    printf("enter n1,n2,k1,k2\n");
    scanf("%d%d%d%d",&a[0],&a[1],&k1,&k2);
    while(1)
    {
        i++;
        a[i]=a[i]-1;
        if(a[i]<0) break;
        if(i==1) i=-1;
    }
    if(i==0) printf("Second");
    else if(i==1) printf("First");
    return 0;
}