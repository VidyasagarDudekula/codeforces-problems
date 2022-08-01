#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,h=0,l=0,m,n,location[3],count[3],g=0;
	char c[200002];
	scanf("%lld",&n);
	scanf("%s",c);
	i=k=m=0;j=n;
	while(c[i]!='\0')
	{
		if(c[i]=='s')
		{//printf("l=%d \n",l);
			count[m]=l;l=0;
			if(j>count[m]) j=count[m];
			location[m]=i;
			if(m>=1) {
			k=count[m]+count[m-1]+1;if(count[m-1]==0||count[m]==0) k--;
			if(h<k) h=k;
			location[m-1]=location[m];count[m-1]=count[m];m=0;
		} 
		m++;
		}
		else if(i==n-1)
		{g++;
			count[m]=++l;
			//printf("l=%d \n",l);
			if(j>count[m]) j=count[m];
			location[m]=n;
			if(m>=1) {
			k=count[m]+count[m-1]+1;if(count[m-1]==0||count[m]==0) k--;
			if(h<k) h=k;
            location[m-1]=location[m];count[m-1]=count[m];m=0;
		}
		m++;
		}
		else {l++; g++;}
		i++;
	}
	if(j>k)  printf("%lld\n",count[0]);
	else if(g<h&&h>0) printf("%lld",h-1);
	else printf("%lld",h);
	return 0;
}