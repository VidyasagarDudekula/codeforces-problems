#include<stdio.h>
#include<stdlib.h>
struct node{
	long long int data,c;
	struct node *next,*left,*right;
}*temp1,*temp2,*head;
long long int sum=0,k=0,c=0;
void insert()
{
	long long int ele,j=0;
	scanf("%lld",&ele);
	sum=sum+ele;
	temp1=head;
	while(temp1)
	{
		if(temp1->data==ele){j=1; temp1->c++; break;}
		else if(temp1->data>ele){
			j=2;temp2=temp1;temp1=temp1->left;
		}
		else if(temp1->data<ele)
		{
			j=3;temp2=temp1;
			temp1=temp1->right;
		}
	}
	if(j!=1){
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=ele;temp1->c=1;temp1->left=temp1->right=NULL;}
	if(j==2) temp2->left=temp1;
	else if(j==3) temp2->right=temp1;
	else if(j==0) head=temp1; 
}
void fun(struct node *root)
{
	long long int l;
	//printf("data = %lld %lld\n",root->data,root->c);
	if(root->c>=root->data) k=k+root->c;
	else
	{
		if(temp2)
		{
			l=root->data-temp2->data;
			if(root->c>=l) {k=k+root->c; stack[c++]=root->c;}
			else k=k+l; 
		}
		else k=k+root->data;
	} 
	temp2=root;
}
void inorder(struct node *root)
{
	if(root)
	{
		inorder(root->left);
		fun(root);
		inorder(root->right);
	}
}
int main()
{
	long long int i,m,n;
	//printf("enter the number of blocks\n");
	scanf("%lld",&n);
	long long int stack[n];
	//printf("Enter the height of the grid\n");
	scanf("%lld",&m);
	//printf("Enter the elements\n");
	head=NULL;
	for(i=0;i<n;i++) insert();
    temp2=NULL;
	temp1=head;
    inorder(temp1);
    printf("sum=%lld l=%lld\n",sum,k);
    printf("%lld",sum-k);
    return 0;
} 