#include<stdio.h>
#include<stdlib.h>
struct node{
	int egde,cost,qua;
	struct node *nextedge,*connect;
}*emp[1009],*trmp1,*temp2,*temp3;
void combine()
{
	
}
int main()
{
	long long int i,j,k,l,m,n,max=0,mi;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		emp[i]=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&emp[i]->qua);
		if(max<emp[i]->qua) {max=emp[i]->qua; mi=i;}
		emp[i]->nextedge=NULL;
	}
	scanf("%lld",&m);
	for(i=0;i<m;i++)
	{
		scanf("%lld",&k);
		temp1=emp[k];
		while(temp1->nextedge) temp1=temp1->nextedge;
		scanf("%lld",&l);
		temp2=(struct node*)malloc(sizeof(struct node));
		temp2->index=l;temp1->nextedge=temp2;temp2->nextedge=NULL;
		scanf("%d",&temp2->cost);
	}

}