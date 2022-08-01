#include<stdio.h>
#include<stdlib.h>
#define max 100000;
#define min -100000;
int main()
{
	long long int i,j,k,l,m,n,x,y,min_x,max_x,max_y,min_y;
	scanf("%lld",&j);
	int p1,p2,p3,p4;
	while(j!=0)
	{  
		scanf("%lld",&n);
		min_x=min_y=max;
	    max_x=max_y=min;
		while(n!=0)
		{
			scanf("%lld%lld%d%d%d%d",&x,&y,&p1,&p2,&p3,&p4);
			if(!p1) {if(x>max_x) max_x=x;}
			if(!p2) {if(y<min_y) min_y=y;}
			if(!p3) {if(x<min_x) min_x=x;}
			if(!p4) {if(y>max_y) max_y=y;}
			n--;
		}
		if(max_x<=min_x&&max_y<=min_y) printf("1 %lld %lld",max_x,max_y);
		else printf("0");
		printf("\n");
		j--;
	}
	return 0;
}