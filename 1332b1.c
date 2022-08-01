#include<stdio.h>
#include<stdlib.h>
int n,a[1000],b[1000],v=0;
void store(int j)
{
	if(v<j) v=j;
}
int gcd(int a1,int b1)
{
	int l,h;
	if(a1<=b1) {l=a1;h=b1;}
	else {l=b1;h=a1;}
	int g=l/2;
	while(g!=1)
	{
		if(l%g==0&&h%g==0) { return g;}
		else g--;
	}
	return 1;
}
void rec(int b_o,int i,int k)
{int j=i+1;
	while(j!=n)
	{
		if(gcd(b_o,a[j])>1)
		{
			if(b[i]!=-1&&b[j]==-1) {b[j]=b[i];//printf("* a[i]=%d a[j]=%d b[i]=%d\n",a[i],a[j],b[i]);}
		    else if(b[i]==-1&&b[j]!=-1) {b[i]=b[j];}
		    else if(b[i]==-1&&b[j]==-1){b[i]=b[j]=k;k++;}
		    store(k);
		    rec(a[j],j,k);
		}
		j++;
	}
	if(b[i]==-1) {b[i]=k;k++;}
	store(k);
}
int main()
{
	int i,j,l,m,k;
	//printf("Enter the number of elements\n");
	scanf("%d",&n);
	//printf("Enter\n");
	for(i=0;i<n;i++) {scanf("%d",&a[i]);b[i]=-1;}
	rec(a[0],0,1);if(b[n-1]==-1) b[n-1]=v;
    for(i=0;i<n;i++) {printf("%d ",b[i]);}
    return 0;
}