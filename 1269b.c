#include<stdio.h>
#include<stdlib.h>
struct node
{
	long long int data;
}*a_dup[1000000],*b_dup[1000000];
long long int n_a,n_b;
int inc(const void *a, const void *b){
   return *(int *)a - *(int *)b;
}
int main()
{
	long long int i,j,k,l,h,m,n,x;
	printf("Enter the number of elements\n");
	scanf("%lld",&n);
	long long int a[n],b[n];
	printf("enter the moduel number\n");
	scanf("%lld",&m);
	long long int stack[m];
	printf("Enter the a elements\n");
	j=0;
	for(i=0;i<n;i++)
	{
		scanf("%I64d",&k);
		if(a_dup[k]==NULL)
		{
			a[j++]=k;
			a_dup[k]=(struct node*)malloc(sizeof(struct node));
			a_dup[k]->data=0;
		}
		a_dup[k]->data++;
	}
	n_a=j;
	printf("Enter the b elements\n");
	j=0;
	for(i=0;i<n;i++)
	{
		scanf("%I64d",&k);
		if(b_dup[k]==NULL)
		{
			b[j++]=k;
			b_dup[k]=(struct node*)malloc(sizeof(struct node));
			b_dup[k]->data=0;
		}
		b_dup[k]->data++;
	}
	n_b=j;
	qsort(a,n_a,sizeof(long long int),inc);
	qsort(b,n_b,sizeof(long long int),inc);
	for(i=0;i<m;i++) stack[i]=0;
    l=0;
	for(i=0;i<n_b;i++)
	{k=-2;
		if((a_dup[b[i]]==NULL)||(a_dup[b[i]]!=NULL&&b_dup[b[i]]->data!=a_dup[b[i]]->data))
		{
			j=n_a-1;
			for(j=n_a-1;j>=0;j--)
			{
				if(a[j]>-1)
				{
					if(b_dup[b[i]]->data==a_dup[a[j]]->data)
					{
						if((b[i]>a[j]&&b[i]-a[j]<=b[i]-k)||(b[i]<a[j]&&m-a[j]+b[i]<=m-k+b[i])) {k=a[j];h=j;}
					} 
				}
			}
			if(k<m)
			{
				if(b[i]>k) 
				{
					x=b[i]-k;
					stack[x]++;
				}
				else 
				{
					x=m-k+b[i];
					stack[x]++;
				}
				if(stack[x]>=n_a){l=1;printf("%lld",x);break;}
				a_dup[k]->data=0;
				a[h]=-1;
			}
		}
		if(l==1) break;
	}
	if(l==0) printf("0");
	return 0;
}