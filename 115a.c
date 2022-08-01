#include<stdio.h>
int main()
{
    int no_of_enployees,no_of_groups=0,a[2000],count=0,c=-1;
    int i,j;scanf("%d",&no_of_enployees);
    for(i=0;i<no_of_enployees;i++) scanf("%d",&a[i]);
    for(i=0;i<no_of_enployees;i++) printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<no_of_enployees;i++)
    {
        j=i;
        while(a[j]!=-1)
        {
            count++;
            j=a[j]-1;
        }
        if(count>c) {c=count; count=0;}
    }
    printf("%d",c+1);
    return 0;
}