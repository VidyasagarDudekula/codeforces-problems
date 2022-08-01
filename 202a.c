#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i=0,j,k,l,m;
    char c[100],n;
    scanf("%s",c);
    n=c[0];
    while(c[i]!='\0')
    {
        if(n<c[i]) n=c[i];
        i++;
    }
    i=0;
    while(c[i]!='\0')
    {
        if(n==c[i]) printf("%c",c[i]);
        i++;
    }
    return 0;
}