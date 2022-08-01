#include<bits/stdc++.h>
int main()
{
		long long int x,y;
		long long int limit=1000000007;
		std::cin>>x>>y;
		long long int t;
		std::cin>>t;
		long long int i=3;
		std::vector<long long int>v{x,y,y-x,-x,-y,x-y};
		t--;
		t=t%6;
		std::cout<<(v[t]%limit+limit)%limit; 
		return 0;
}