#include<bits/stdc++.h>
int main()
{
	std::string s;
	std::cin>>s;
	int count=0,one=0;
	int n=s.length();
	for(int i=s.length()-1;i>=0;i-=1)
	{
		if(s[i]=='1') one++;
	}
	count=(n/2)+(n%2);
	if(one==1)
	{
		if(n%2!=0) count--;
	}
	if(one==0) count=0;
	std::cout<<count<<"\n";
}