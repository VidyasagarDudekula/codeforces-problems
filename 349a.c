#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,m,n,cash_25=0,cash_50=0,cash=0;
	printf("enter the number of elements u want\n");
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&cash);
		if(cash/25==1) cash_25++;
		else 
		{
			k=cash/25;
			if(k>2)
			{
				if(cash_50<=0)
				{
					if(cash_25>=k-1) cash_25=cash_25-(k-1);
					else 
					{
						printf("NO");break;
					}
				}
				else{
					cash_50--;
				if(cash_25>0) cash_25--;
				else 
				{
					printf("NO");break;
				}
			    }
			}
			else if(k==2)
			{
				cash_50++;
				if(cash_25>0) cash_25--;
				else 
				{
					printf("NO");break;
				}
			}
		}
		if(i==n-1) printf("YES");
	}
	return 0;
}