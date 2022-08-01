#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,l,m,n,ele[202],index[202],check_ind[202];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++) check_ind[i]=0;
	printf("Enter the elements\n");
	j=1;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ele[i]);
		if(ele[i]==0) index[j++]=i; 
		check_ind[ele[i]]=1;
	}
	l=j-1;
	int f=1;
	for(i=1;i<=n;i++)
	{
		if(check_ind[i]==0)
		{
			if(index[l]!=i) ele[index[l]]=i;
			else if(l!=j-1)
			{
				k=index[l+1];
				m=ele[k];
				ele[k]=i;
				ele[index[l]]=m;
			}
			else 
			{
				k=index[l-1];
				index[l-1]=index[l];
				index[l]=k;
				ele[index[l]]=i;
			}
			l--;
			if(l==0) break;
		}
	}
	for(i=1;i<=n;i++) printf("%d\n",ele[i]);
	return 0;
}