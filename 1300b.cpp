#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		int v[2*n+1];
		for(int i=1;i<=2*n;i++)
		{
			std::cin>>v[i];
		}
		std::sort(v+1,v+1+2*n);
		std::cout<<std::abs(v[n]-v[n+1])<<"\n";
	}
}