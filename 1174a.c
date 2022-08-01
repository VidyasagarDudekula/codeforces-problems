#include<stdio.h>
#include<stdlib.h>
long long int a[1000000];
int main()
{
    long long int i,j,k,s,l,temp_l=-11,temp_s=-11,m,n,sum1=0,sum2=0;
    printf("enter the number\n");
    scanf("%lld",&n);
    for(i=0;i<2*n;i++) scanf("%lld",&a[i]);
    l=n;
    s=n-1;
    while(l<2*n&&s>=0)
    {
        if(a[l]!=a[s])
        {
           temp_l=l; temp_s=s;
        }
        sum1=sum1+a[l];
        sum2=sum2+a[s];
        l++;
        s--;
    }
    if(temp_l==-11&&temp_s==-11)
    {l=0;s=n;
        while(l<n&&s<2*n)
        {
            if(a[l]!=a[s]){temp_l=l; temp_s=s; break;}
            l++;
            s++;
        }
        if(temp_l==-11&&temp_s==-11) printf("-1");
        else {
            k=a[temp_l];
            a[temp_l]=a[temp_s];
            a[temp_s]=k;
            for(i=0;i<2*n;i++) printf("%lld ",a[i]);
        }
    }
    else if(sum1!=sum2) {
        for(i=0;i<2*n;i++) printf("%lld ",a[i]);
    } 
    else {
        k=a[temp_l];
        a[temp_l]=a[temp_s];
        a[temp_s]=k;
        for(i=0;i<2*n;i++) printf("%lld ",a[i]);
    }
    return 0;
}