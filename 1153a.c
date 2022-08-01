#include<stdio.h>
#include<stdio.h>
#include<math.h>
long long int a,b;
int main()
{
    long long int i,j,k=0,l,m=0,i_1,n,t,h,i_2,z=0,m1=0;
    printf("Enter n:\nt:\n");
    scanf("%lld%lld",&n,&t);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(t<=a)
        {
            if(m1==0){
                z=a;
                i_2=i;
            }
            else if(z>a){
                z=a;
                i_2=i;
            }
            k=1;
            m1++;
        }
        else
        {j=0;
            l=a+b*j;
            while(t>l)
            {j++;
                l=a+b*j;
            }
            if(m==0){ h=l;
            i_1=i;}
            else if(h>l){
                h=l;
                i_1=i;
            }m++;
        }
    }
    if(k==1) {
        if(h<z) printf("%lld",i_1+1);
        else printf("%lld",i_2+1);
    }
    else printf("%lld",i_1+1);
    return 0;
}