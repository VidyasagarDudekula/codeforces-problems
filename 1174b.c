#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right,*next1,*next2;
}*temp1,*temp2,*temp3,*temp4,*head,*temp5,*temp6,*temphead1,*temphead2;
void insert()
{temp2=temp3=NULL;
    long long int e,k=0,height_left,height_right,co;
    printf("Enter the elemet that u want enter\n");
    scanf("%lld",&e);
    while(temp1)
    {
        if(temp1->data>=e)
        {
            temp3=temp2;
            temp2=temp1; k=1;
            temp1=temp1->left;
        }
        else {temp3=temp2;
            temp2=temp1;
            k=2;temp1=temp1->right;
        }
    }
    temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=e;
    temp1->left=temp1->right=NULL;
    if(k==1) temp2->left=temp1;
    else if(k==2) temp2->right=temp1;
    if(k==0) head=temp1; 
    if(temp3)
    {
        height_left=findheight(temp3->left);
        height_right=findheight(temp3->right);
        if(abs(height_left-height_right)>1) check();
    }
}
void check()
{
    if(temp3->left==temp2)
    {
        if(temp2->left==temp1){

        }
        else second=1;
    }
    else {first=3;
        if(temp2->right==temp1) second=0;
        else second=1;
    }
}
void push(struct node *root)
{
    temp5=root;
    temp5->next1=temphead1;
    temp5->next2=NULL;
    if(!temphead2) temphead2=root;
    else temphead1->next2=temp5;
    temphead1=temp5;
}
void pop()
{temp5=temphead2;
    temphead2=temphead2->next2;
    temphead2->next1=NULL;
}
int findheight(struct node *root)
{temphead2=temphead1=NULL;
    long long int height=0,count=1,k=0,repeat=0;
    while(1)
    {repeat++;
        if(root->left){
            push(root->left); k++;
        } 
        if(root->right)
        {
            push(root->right);k++;
        }
        if(count==repeat)
        {
            count=k;k=repeat=0;height++;
        }
        if(temphead2){pop(); root=temp5;}
        else break;
    }
    return (height);
}
int main()
{
    long long int i,k;
    printf("enter the number of elemets u want\n");
    scanf("%lld",&k);
    head=NULL;
    for(i=0;i<k;i++){ temp1=head; 
        insert();}
        
    return 0;
}