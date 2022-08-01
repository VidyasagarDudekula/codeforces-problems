#include<bits/stdc++.h>
int main()
{
	long long int n;
	std::cin>>n;
	long long int k=std::sqrt(n);
	for(int i=k;i>=1;i--)
	{
		long long int first=(i*(i+1)*(i+1))/2;
		long long int second=(i*(i+1)*(2*i+1))/6;
		if(first-second<=n)
		{
			std::cout<<i<<"\n";
			break;
		}
	}
}