#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int i=0,j=0,k,l,m=0,n,d;
   printf("Enter the two numbers \n");
   scanf("%d%d",&d,&n);
   if(n%d!=0) printf("-1");
   else
   {
       l=n/d;
       while((i!=1||j!=1)&&l!=1)
       {
           if(l%2==0){ l=l/2;
           m++;
           i=0;}
           else i=1;
           if(l%3==0){ l=l/3;
            m++;
            j=0;
           }
           else j=1;
       }
       if(l==1) printf("%d",m);
       else printf("-1");
   }  
   return 0;
}