#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,k,l=-1,m,t,n;
    char c[100];
    printf("enter the number of elements \n in time\n");
    scanf("%d%d",&n,&t);
    printf("Enter the string\n");
    scanf("%s",c);
    for(j=1;j<=t;j++){
    for(i=0;i<n-1;i++)
    {
        if(i!=l) 
        {
            if(c[i]=='B'&&c[i+1]=='G')
            {
                c[i]='G';
                c[i+1]='B';
                l=i+1;
            }
        }
    }}
    printf("\n%s",c);
    return 0;
}