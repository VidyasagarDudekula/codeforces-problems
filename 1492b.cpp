#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long long int n;
		std::cin>>n;
		std::vector<long long int> v(n,0);
		std::vector<long long int> seen(n+1,0);
		std::vector<long long int> stored(n,0);
		for(int i=0;i<n;i++)
			std::cin>>v[i];
		if(n==1){
			std::cout<<v[0]<<"\n";
			continue;
		}
		long long int i=n;
		long long int k=0;
		long long int c=0;
		while(i>0)
		{
			long long int j=n-1-k;
			long long int l=k;
			while(j>=0)
			{
				seen[v[j]]=1;
				k++;
				if(v[j]==i) break;
				j--;
			}
			while(j<=n-1-l)
			{
				stored[c++]=v[j++];
			}
			while(seen[i]==1)
				i--;
		}
		for(i=0;i<n;i++)
			std::cout<<stored[i]<<" ";
		std::cout<<"\n";
		//this is 
	}
}