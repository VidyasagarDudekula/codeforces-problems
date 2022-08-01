#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head,*temp1,*temp2;
void create(int k)
{
	int i;
	for(i=1;i<k;i++)
	{
		temp1=(struct node*)malloc(sizeof(struct node));
		temp1->data=i;temp1->next=head;
		head=temp1;
	}
}
void delete(struct node *root)
{
	if(temp2==NULL) head=root->next;
	else temp2->next=root->next;
	temp1=head;temp2=NULL;
}
int main()
{
	int i,j,k,l,m,n,q;
	int a[101];
	//printf("Enter the number of test cases\n");
	scanf("%d",&q);
	while(q!=0)
	{m=1;
		head=NULL;
		//printf("Enter the number of elements\n");
		scanf("%d",&n);
		create(n);
		//printf("Enter the elements\n");
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		temp1=head;temp2=NULL;
		while(temp1!=NULL)
		{
			k=temp1->data;
			if(a[k-1]>a[k])
			{
				l=a[k-1];
				a[k-1]=a[k];
				a[k]=l;
				delete(temp1);
			}
			else{temp2=temp1; temp1=temp1->next;}
			if(temp1==NULL) break;
		}
		for(i=0;i<n;i++) printf("%d ",a[i]);
		printf("\n");
	    q--;
	}
}