#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,s_1,s_2,r,end;
    char a[100000];
    printf("Enter the string\n");
    scanf("%s",a);
    n=strlen(a);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]=='a') 
        {
            l=i;
            break;
        }
    }
    while(1)
    {
        end=l;
        s_1=0;s_2=0;
        for(i=0;i<=end;i++)
        {
            if(a[i]!='a')
            {
                r=a[i];
                s_1=s_1+r;
            }
        }
        for(i=end+1;i<n;i++)
        {
            r=a[i];
            s_2=s_2+r;
        }
        if(s_1==s_2)
        {
            for(i=0;i<=end;i++)
            printf("%c",a[i]);
            break;
        }
        else
        {
            if(s_1>s_2||l>=n-1)
            {
                printf(":(");
                break;
            }
            else if(l<n-1) l++;
        }
    }
    return 0;
}