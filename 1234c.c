#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,m,n,q;
	printf("Enter the no.of queries that u are doing\n");
	scanf("%lld",&q);
	while(q!=0)
	{
		printf("Enter no.of elements \n");
		scanf("%lld",&n);
		long long int a[2][n];
		for(i=0;i<2;i++){
			for(j=0;j<n;j++)
			{
				scanf("%lld",&a[i][j]);
			}
		}
		i=j=0;k=-1;
		while(i!=2&&j!=n)
		{
			if(a[i][j]==1||a[i][j]==2)
			{
				if(k==1||k==-1){j++;k==1;}
				else {printf("No\n");break;}
			}
			else
			{
				if(k==1||k==-1)
				{
					if(i==1) i--;
					else i++;
					k=2;
				}
				else if(k==2){j++;k=1;}
			}
		}
		if(j==n)
		{
			if(i==0) printf("No\n");
			else printf("Yes\n");
		}
		q--;
	}
	return 0;
}