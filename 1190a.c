#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,m,n,g,z,h,temp,a[100000];
	printf("Enter trhe number of elements, positions and pages\n");
	scanf("%I64d%I64d%I64d",&n,&m,&k);
	printf("enter the list \n");
	for(i=0;i<m;i++) scanf("%I64d",&a[i]);
	h=0;
    l=0;i=0;j=0;
    while(i<m)
    {
    	g=h;
    	temp=a[i]-l;
    	if(temp%k!=0) g=temp/k;
    	else g=(temp/k)-1;
    	z=0;
    	h=g;
    	while(i<m)
    	{
    		if(temp<=(k*(g+1))&&temp>k*g)
    		{i++;z++;
    			if(i<m) temp=a[i]-l;
    			else break;
    		}
    		else break;
    	}
    	l=l+z;j++;
    }
    printf("number of operations\n");
    printf("%I64d",j);
    return 0;
}