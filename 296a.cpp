#include<bits/stdc++.h>
int main()
{
	int n;
	std::cin>>n;
	int m=0;
	std::map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		int k;
		std::cin>>k;
		if(mp.find(k)!=mp.end())
			mp[k]++;
		else mp[k]=1;

		m=std::max(m,mp[k]);
	}
	// for(auto it:mp)
	// {
	// 	std::cout<<it.first<<" "<<it.second<<"\n";
	// }
	// std::cout<<"max:- "<<m<<"\n";
	if(n==1)
		std::cout<<"YES";
	else if(n==2)
	{
		if(m==2)
			std::cout<<"NO";
		else std::cout<<"YES";
	}
	else
	{
		int k=n/2;
		if((m>=k+2 && n%2!=0) || (m>=k+1 && n%2==0) )
			std::cout<<"NO";
		else std::cout<<"YES";
	}
}