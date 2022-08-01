#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		std::vector<long long int> v(n,0);
		for(int i=0;i<n;i++)
			std::cin>>v[i];

		std::sort(v.begin(),v.end());

		int count=0,i,zero=0;
		long long int m=INT_MAX;
		for(i=0;i<n;i++)
		{
			if(i>0 && v[i]<=0 && std::abs(v[i]-v[i-1])<m) m=std::abs(v[i]-v[i-1]); 
			// if(v[i]==0) zero++;
			if(v[i]<=0) count++;
			else break;
		}
		if((i>0 && i<n && v[i]<=m)) count++;
		if(n>0 && count==0) count=1;
		std::cout<<count<<"\n";
	}
}