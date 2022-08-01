#include<bits/stdc++.h>
int main()
{
	int n,s,t;
	std::cin>>n;
	std::cin>>s>>t;
	s--;
	t--;
	std::vector<int> v(n,0);
	for(int i=0;i<n;i++)
	{
		int k;
		std::cin>>k;
		k--;
		v[i]=k;
	}
	int i=0,count=0;
	while(s!=t)
	{
		s=v[s];
		count++;
		if(count>n) break;
	}
	if(s==t)
		std::cout<<count;
	else std::cout<<-1;
}