#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long long int n,k;
		std::cin>>n>>k;
		long long int sum=1;
		long long int hours=0;
		long long int p=1;
		while(sum<k)
		{
			sum+=p;
			p*=2;
			hours++;
		}
		n-=sum;
		if(n<0) n=0;
		long long int j=n/k;
		hours+=j;
		if(n%k!=0) hours++;
		std::cout<<hours<<"\n";
	}
}