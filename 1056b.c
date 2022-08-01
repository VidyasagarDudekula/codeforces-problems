#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,b,v,k,l,m,n,c=0,x,y;
	//printf("Enter the number of cells and enter the no.of friends\n");
	scanf("%lld%lld",&n,&m);
	b=n/m;
	for(i=1;i<=m;i++)
	{
		for(j=i;j<=m;j++)
		{
			k=i%m;
			l=j%m;
			if((k*k+l*l)%m==0)
			{
				if(n%m>=k&&k!=0) x=b+1;
				else x=b;
				if(n%m>=l&&l!=0) y=b+1;
				else y=b;
				if(i==j) c+=x*y;
				else c+=(x*y)*2; 
			}
		}
	}
	printf("%lld",c);
	return 0;
}