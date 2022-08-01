#include<bits/stdc++.h>
int main()
{
	std::string s;
	std::cin>>s;
	int zero=s.length();
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		{
			zero=i;
			break;
		}
	}
	std::string s1;
	if(zero<s.length())
	{
		for(int i=0;i<s.length();i++)
		{
			if(i!=zero)
			{std::string s2(1,s[i]);
				s1+=s2;
			}
		}
	}
	else{
		int one=-1;
		for(int i=s.length()-1;i>=0;i--)
		{
			if(s[i]=='1')
			{
				one=i;
				break;
			}
		}
		int count_i=0;
		for(int i=0;i<s.length();i++)
		{
			if(i!=one)
			{
				std::string s2(1,s[i]);
				if(s[i]=='1')
				{
					count_i++;
					s1+=s2;
				}
				else if(count_i>0)
					s1+=s2;
			}
		}
	}
	if(s1.length()==0)
		std::cout<<"0";
	else std::cout<<s1;
}