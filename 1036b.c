#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,j,k,l,m,n_a,n_b;
	long long int a[100000],b[100000];
	printf("Enter the number of elements in a\n");
	scanf("%lld",&n_a);k=0;
	printf("Enter\n");
	for(i=0;i<n_a;i++){
		scanf("%lld",a[i]);k+=a[i];
	}
	printf("Enter the number of elements in b\n");
	scanf("%lld",&n_b);l=0;
    printf("Enter\n");
	for(i=0;i<n_b;i++){
		scanf("%lld",b[i]);l+=b[i];
	}
	if(k!=l) printf("-1\n");
	else
	{l=0;
		for(i=0,j=0;i<n_a,j<n_b)
		{
			if(a[i]==b[j]){l++;i++;j++;}
			else if(a[i]<b[j])
			{
				a[i+1]+=a[i];i++;
			}
			else 
			{
				b[j+1]+=b[j];j++;
			}
		}
		printf("%lld\n",l);
	}
	return 0;
}