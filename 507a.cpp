#include<bits/stdc++.h>
int main()
{
	int n,k;
	std::cin>>n>>k;
	std::vector<int> v1(n,0);
	for(int i=0;i<n;i++)
		std::cin>>v1[i];

	std::vector<int> v(v1);
	std::sort(v.begin(),v.end());

	int begin=-1,end=0,sum=0;
	int max_length=0;
	if(v[0]>k)
	{
		std::cout<<0<<"\n";
		return 0;
	}
	std::pair<int,int>p;
	while(end<n && begin!=n-1)
	{
		bool flag=false;
		while(v[begin+1]+sum>k)
		{
			if(begin<end) {break; flag=true;} 
			else
			{
				sum-=v[end];
				end++;
			}
		}
		if(flag) break;
		sum+=v[begin+1];
		begin++;
		if(begin-end+1>max_length)
		{
			max_length=begin-end+1;
			p.first=end;
			p.second=begin;
		}
	}
	std::cout<<max_length<<"\n";
	if(max_length==0) return 0;

	for(int i=p.first;i<=p.second;i++)
	{
		for(int j=0;j<v1.size();j++)
		{
			if(v[i]==v1[j])
			{v1[j]=-1;
				std::cout<<j+1<<" ";
				break;
			}
		}
	}
}