#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int a[5000];
int main()
{
    int i,j,k=1,l,m=0,n,t=0,temp1=0,temp2=0,temp3=0;
    printf("enter the no.of students\n");
    scanf("%d",&n);
    printf("Enter the student talents\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1) temp1++;
        else if(a[i]==2) temp2++;
        else if(a[i]==3) temp3++;
    }
    if(temp1==temp2) i=temp1;
    else i=abs(temp1-temp2);
    if(i!=temp3) i=abs(i-temp3); 
    printf("%d",i);
    return 0;
}