#include<bits/stdc++.h>
int main()
{
	int n;
	long long int l;
	std::cin>>n;
	std::cin>>l;
	std::vector<long double>v(n,0);
	for(int i=0;i<n;i++){
		unsigned long long t;
		std::cin>>t;
		v[i]=(long double)t;
	}
	std::sort(v.begin(),v.end());

	for(int i=0;i<n;i++)
		std::cout<<v[i]<<" ";
	std::cout<<"\n";

	long long int first=0,last=l;
	long double max_dis=0.0,dis=0.0;
	max_dis=std::max(max_dis,(v[0]-0.0));
	for(int i=0;i<n-1;i++)
	{
		dis=(v[i+1]-v[i])/2;
		if(dis>max_dis)
			max_dis=dis;
	}
	max_dis=std::max(max_dis,(l-v[n-1]));
	std::cout<<max_dis<<"\n";
}