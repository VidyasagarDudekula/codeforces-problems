#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char a[]={'a','e','i','o','u'};
void swap()
{
    int i;
    char ch=a[0];
    for(i=0;i<4;i++)
    a[i]=a[i+1];
    a[4]=ch;
}
int main()
{
    int i,j,k=0,c,h,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0&&i>=5&&n/i>=5)
        {
            k=1;
            for(j=0;j<i;j++)
            { c=0;
                for(h=0;h<n/i;h++)
                {
                    if(c==5) c=0;
                    printf("%c",a[c]);
                    c++;
                }
                swap();
            }break;
        }
        else k=0;
    }
    if(k==0) printf("-1");
    return 0;
}