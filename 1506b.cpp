#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n,k;
		std::cin>>n>>k;
		std::cin.ignore();
		std::string s;
		std::cin>>s;
		int begin=0,end=n-1;
		while(begin<n)
		{
			if(s[begin]=='*')
			{
				s[begin]='x';
				break;
			}
			begin++;
		}
		if(begin==n)
		{
			std::cout<<0<<"\n";
			continue;
		}
		while(end>=0)
		{
			if(s[end]=='*')
			{
				s[end]='x';
				break;
			}
			end-=1;
		}
		if(end==begin)
		{
			std::cout<<"1"<<"\n";
			continue;
		}
		int i=begin;
		while(i<n)
		{
			begin=i;
			int j=i;
			int seen=0,marked=0,last=i;
			while(j<n && j-begin<=k)
			{
				if(j!=begin && s[j]=='*')
				{seen=1;
					last=j; 
				}
				else if(j!=begin && s[j]=='x')
				{
					marked=1;
					seen=0;
					last=j;
					break;
				}
				j++;
			}
			if(seen==1)
			{
				s[last]='x';
				i=last;
			}
			else break;
		}
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='x') count++;
		}
		//std::cout<<s<<" := ";
		std::cout<<count<<"\n";
	}
}