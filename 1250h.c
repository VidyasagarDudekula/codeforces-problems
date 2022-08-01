#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,l_num,m,n;
	int a[12];
	//printf("Enter the number of qires\n");
	scanf("%d",&k);
	while(k!=0)
	{l=999999;
		for(i=1;i<=10;i++)
		{
			scanf("%d",&a[i-1]);
            if(l>a[i-1]) {l=a[i-1];l_num=i-1;}
		}
		if(l_num==0)
		{
			for(i=1;i<10;i++) 
			{
				if(l==a[i]) {l_num=i; break;}
			}
		}
		if(l_num==0){printf("1"); for(i=1;i<=l+1;i++) printf("0");}
		else for(i=1;i<=l+1;i++) printf("%d",l_num);
		printf("\n");k--;
	}
	return 0;
}