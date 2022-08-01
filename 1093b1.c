#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char c[1000];
void sort(int beg,int end,int mid)
{
    int i,j,k;
    char b[1000];
    k=beg;
    i=beg;
    j=mid+1;
    while(i<=mid&&j<=end)
    {
        if(c[i]>c[j]) b[k++]=c[j++];
        else b[k++]=c[i++];
    }
    while(i<=mid) b[k++]=c[i++];
    while(j<=end) b[k++]=c[j++];
    for(i=beg;i<=end;i++) c[i]=b[i];
}
void merg(int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        merg(i,mid);
        merg(mid+1,j);
        sort(i,j,mid);
    }
}
int main()
{

    int i,j,k,l,m,n;
    char a[100][1000],v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        strcpy(c,a[i]);
        strrev(c);
        if(strcmp(c,a[i])==0)
        {
            l=strlen(a[i]);
            merg(0,l-1);
            if(strcmp(c,a[i])==0) printf("-1\n");
            else printf("%s\n",c);
        }
        else printf("%s\n",a[i]);
    }
    return 0;
}