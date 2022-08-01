#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    char c[2000];
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("enter the letter\n");
    scanf("%s",c);
    if(n%2==0)
    {
        for(i=n-3;i>=1;i=i-2) printf("%c",c[i]);
        for(i=0;i<n-1;i=i+2) printf("%c",c[i]);
        printf("%c",c[n-1]);
    }
    if(n%2!=0)
    {
        for(i=n-2;i>=1;i=i-2) printf("%c",c[i]);
        for(i=0;i<n;i=i+2) printf("%c",c[i]);
    }
    return 0;
}