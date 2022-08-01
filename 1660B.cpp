#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		long long int s=0,k,l=0;
		for(int i=0;i<n;i++)
		{
			std::cin>>k;
			s=std::abs(k-s);
		}
		if(s>1) std::cout<<"NO"<<"\n";
		else std::cout<<"YES"<<"\n";
	}
}