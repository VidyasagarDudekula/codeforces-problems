#include<stdio.h>
#include<stdlib.h>
int n,c;
struct node{
	int data;
	struct node *next;
}*head_a,*head_b,*temp1,*temp2,*temp3;
float move()
{
	int i,j;
	float z,f,sum=0.0;
	temp1=head_a;
	for(i=0;i<n;i++)
	{
		if(i==0) temp2=temp3;
		if(i==1) temp2=head_b;
		if(temp2->data -1 >0) f=(c*1.0+sum)/(temp2->data -1);
		else {sum=-1;  break;}
		sum=sum+f;
		if(temp1->data -1 >0) f=(c*1.0+sum)/(temp1->data -1);
		else {sum=-1;  break;}
		sum=sum+f;
		temp2=temp2->next;temp1=temp1->next;
	}
	return sum;
}
int main()
{
	int i,j,k;
	float l;
	//printf("Enter the number of planets\n");
	scanf("%d",&n);
	//printf("neter the weight of payload\n");
	scanf("%d",&c);
	head_a=head_b=NULL;
	for(i=0;i<n;i++)
	{temp1=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&temp1->data);
		temp1->next=head_a;
		head_a=temp1;
	}
	for(i=0;i<n;i++)
	{temp1=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&temp1->data);
		temp1->next=head_b;
		if(i==0) temp3=temp1;
		head_b=temp1;
	}
	l=move();
	if(l!=-1.0) printf("%f",l);
	else printf("-1");
	return 0;
}