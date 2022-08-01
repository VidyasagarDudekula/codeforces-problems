#include<bits/stdc++.h>
int main()
{
	int n,m;
	std::cin>>n>>m;
	std::cin.ignore();
	std::map<std::string,int> palindrom;
	std::map<std::string,int> normal;
	for(int i=0;i<n;i++)
	{
		std::string s;
		std::cin>>s;
		std::string s1=s;
		std::reverse(s1.begin(),s1.end());
		if(s1==s)
		{
			if(palindrom.find(s)!=palindrom.end())
			{
				palindrom[s]++;
			}
			else palindrom[s]=1;
		}
		else{
			if(normal.find(s)!=normal.end())
			{
				normal[s]++;
			}
			else normal[s]=1;
		}
	}

	int count=0;
	std::string s="";
	for(auto it:palindrom)
	{
		if(it.second%2!=0){
			s=it.first;
			it.second--;
			break;
		}
	}
	for(auto it:palindrom)
	{
		std::string s1=it.first;
		int t=it.second/2;
		for(int i=0;i<t;i++)
		{
			s=s1+s+s1;
		}
	}
	for(auto it:normal)
	{
		std::string s1=it.first;
		std::reverse(s1.begin(),s1.end());
		if(normal.find(s1)!=normal.end())
		{
			int m=std::min(it.second,normal[s1]);
			it.second-=m;
			normal[s1]-=m;
			for(int i=0;i<m;i++)
				s=it.first+s+s1;
		}
	}
	std::cout<<s.length()<<"\n";
	std::cout<<s;
}