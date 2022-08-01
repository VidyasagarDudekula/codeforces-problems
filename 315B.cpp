#include<bits/stdc++.h>
int main()
{
	int n,m;
	std::cin>>n>>m;
	std::vector<long long int> v(n);
	for(int i=0;i<n;i++)
	std::cin>>v[i];
	long long int sum=0;
	for(int i=0;i<m;i++)
	{
		int o;
		std::cin>>o;
		if(o==1)
		{
			long long int p,val;
			std::cin>>p>>val;
			p--;
			v[p]=val-sum;
		}
		else if(o==2)
		{
			long long int k;
			std::cin>>k;
			sum+=k;
		}
		else if(o==3)
		{
			int p;
			std::cin>>p;
			p--;
			std::cout<<v[p]+sum<<"\n";
		}
	}
}