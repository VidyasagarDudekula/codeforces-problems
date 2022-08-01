#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t!=0){
	int i,j,k,l=0,m,n;
	//printf("enter the number of elements\n");
	scanf("%d",&n);
	int a[1000],b[1000];
	int c[]={2,3,5,7,11,13,17,19,23,29,31};
	for(i=0;i<n;i++) {scanf("%d",&a[i]); b[i]=0;}
	k=1;
	for(i=0;i<11;i++)
	{l=0;
		for(j=0;j<n;j++)
		{
			if(a[j]%c[i]==0&&b[j]==0) {b[j]=k; l=1;}
		}
		if(l==1) k++;
	}
	printf("%d\n",k-1);
	for(i=0;i<n;i++) printf("%d ",b[i]);
	printf("\n");
t--;
}
return 0;
}