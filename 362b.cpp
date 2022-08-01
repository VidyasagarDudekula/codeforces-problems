#include<bits/stdc++.h>
int main()
{
	int n,m;
	std::cin>>n>>m;
	std::vector<long long int>v(m,0);
	for(int i=0;i<m;i++)
		std::cin>>v[i];
	std::sort(v.begin(),v.end());
	if(m>0 && (v[0]==1 || v[m-1]==n))
	{
		std::cout<<"NO";
		return 0;
	}
	int i=0;
	if(n<=4 || m==0)
	{
		std::cout<<"YES";
		return 0;
	}
	while(i<m-2)
	{
		if(v[i+1]-v[i]==1 && v[i+2]-v[i+1]==1)
		{
			std::cout<<"NO";
			return 0;
		}
		i++;
	}
	std::cout<<"YES";
	return 0;
}