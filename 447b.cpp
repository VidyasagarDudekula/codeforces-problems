#include<bits/stdc++.h>
int main()
{
	std::string s;
	std::cin>>s;
	int k;
	std::cin>>k;
	std::vector<int>v(26,0);
	int m=-1;
	for(int i=0;i<26;i++)
	{
		std::cin>>v[i];
		m=std::max(m,v[i]);
	}
	long long int sum=0;
	for(int i=0;i<s.length();i++)
	{
		int l=s[i]-97;
		sum+=(v[l]*(i+1));
	}
	int i=s.length()+1;
	while(k--)
	{
		sum+=(m*i);
		i++;
	}
	std::cout<<sum<<"\n";
}