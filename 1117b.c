#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int i,j,k,s,sum,l,m,t,n,v;
    //printf("Enter how many emots\nenter number of chances\nno.of times in arow\n");
    scanf("%lld%lld%lld",&n,&m,&t);
    //printf("enter the no.of emotts\n");
    for(i=0;i<n;i++)
    {
        scanf("%lld",&v);
        if(i==0) l=v;
        else if(l<v)
        {
            s=l;
            l=v;
        }
        else if(s<v) s=v;
    }
    sum=s*m/(t+1)+l*(m-m/(t+1));
    //printf("l=%lld\ns=%lld\nj=%lld\nk=%lld\n",l,s,j,k);
    printf("%lld",sum);
    return 0;
}