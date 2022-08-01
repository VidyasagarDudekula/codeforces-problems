#include<stdio.h>
#include<stdlib.h>
int main()
{
	int q;
	scanf("%d",&q);
	while(q!=0)
	{
		int i,j,k=0,l,l_g=0,l_s=0,s_i,g_i,b_i,l_b=0,m,n,a[100],b[100];
		printf("Enyer the number\n");
		scanf("%d",&n);j=0;m=1;
		for(i=0;i<n;i++) {scanf("%d",&a[i]);
        if(i>0)
        {
        	if(a[i]==a[i-1]) m++;
        	else {b[j++]=m; m=1;}
        }
        if(i==n) b[j++]=m;
	    }
		l=n/2;
	    int t=0;
	    if(l<5) k=1;
	    else{
	    	for(i=0;i<j;i++)
	    	{
	    		if(t<=l) t=t+b[i];
	    		else {t=t-b[i-1];i--; break;}
	    	}
	    	if(t>l) {t=t-b[i]; i--;}
	    	i--;
	    	for(j=0;j<=i;j++)
	    	{ if(l_g<t/3) l_g+=b[j];
	    	    else {l_g-=b[j-1]; g_i=j-2;break;}
	    	}
            for(j=g_i+1;j<=i;j++)
	    	{ if(l_s<=l_g) l_s+=b[j];
	    		else {s_i=j-1;break;}
	    	}
	    	for(j=s_i+1;j<=i;j++) l_b+=b[j];
	    }
	if(k==1) printf("0 0 0\n");
	else printf("%d %d %d\n",l_g,l_s,l_b);
	q--;
	}
	return 0;
}
