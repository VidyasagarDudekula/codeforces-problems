#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int r,y,b,sum,l;
    printf("Enter the values of red,blue,yellow\n");
    scanf("%d%d%d",&y,&b,&r);
    if(y<r&&y<b){
        if(r-y>=2) sum=y+y+y+1+2;
        else if(r-y<2) sum=y+y+y;
    }
    else if((r<y&&r<b)||r==y) sum=r+r+r-1-2;
    else if(b<r&&b<y) sum=b+b+b;
    else if(y==b&&y!r) 
    {
        if(y<r){
        if(r-y>=2) sum=y+y+y-1+2;
        else if(r-y<2) sum=y+y+y-2;
        }
        else{
            sum=r+r+r-1-2;
        }
    }
    else if(y==b&&b==r) sum=r+r-1+r-2;
    else if(r==b)
    {
        if(r<y) sum=r+r+r-1-2;
        else {
            if(r-y>=2) sum=y+y+y+1+2;
        else if(r-y<2) sum=y+y+y;
        }
    }
    printf("%d",sum);
    return 0;
}