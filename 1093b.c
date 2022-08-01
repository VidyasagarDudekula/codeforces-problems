#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,k,l,m,n;
    char c[1000],a[100][1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        strcpy(c,a[i]);
        strrev(c);
        if(strcmp(c,a[i])==0)
        {
            l=strlen(a[i]);
            j=0;k=0;
            if(l%2==0)
            {
                for(k=l-3;k>=1;k=k-2) c[j++]=a[i][k];
                for(k=0;k<=l-2;k=k+2) c[j++]=a[i][k];
                c[j++]=a[i][l-1];
            }
            else
            {
                for(k=l-2;k>=1;k=k-2) c[j++]=a[i][k];
                for(k=0;k<=n-1;k=k+2) c[j++]=a[i][k];
            }
            if(strcmp(c,a[i])==0) printf("-1\n");
            else printf("%s\n",c);
        }
        else printf("%s\n",a[i]);
    }
    return 0;
}