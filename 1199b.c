#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,m,h;
	double f,v;
	scanf("%lld%lld",&h,&l);
    m=l*l-h*h;
    v=m*1.0;
    f=v/(2*h*1.0);
    printf("%f",f);
    return 0;
}