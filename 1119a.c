#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,k2;
    printf("Entre the number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(i==0) ,k=m;
        else{
            if(m!=k)
            {
                k2=m;
                j=i;
                l=j;
            }
        }
    }
    if(j!=n-1)
    {
        if(j>(n-1-j)) l=j;
        else l=n-1-j;
    }
    printf("%d",l);
    return 0;
}