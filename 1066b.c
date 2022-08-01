#include<stdio.h>
#include<stdlib.h>
int n,r,stack[100],n_1;
int main()
{
	int i,j,k,l;
	printf("Enter the number of elements\nposition range\n");
	scanf("%d%d",&n,&r);
	printf("Enter the elements\n");n_1=0;
	for(i=0;i<n;i++) 
	{
		scanf("%d",&j);
		if(j==1) stack[n_1++]=i;
	}
	return 0;
}