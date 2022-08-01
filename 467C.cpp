#include<bits/stdc++.h>
int main()
{
	int n,m,k;
	std::cin>>n>>m>>k;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		std::cin>>v[i];

	std::vector<long long int>s(n);
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=v[i];
		s[i]=sum;
	}
	std::priority_queue<std::pair<long long int,int>> pq;
	for(int i=0;i<=n-m+1;i++)
	{
		int r=i+m-1;
		if(r>=n) break;
		int index_l=i,index_r=r,sum=0;
		if(i==0)
			sum=s[r];
		else
			sum=s[r]-s[i-1];
		std::pair<int,int>p1;
		p1.first=sum; p1.second=index_l;
		pq.push(p1);
	}
	int limit=k;
	std::vector<int> start_index;
	sum=0;
	while(limit>0 && !pq.empty())
	{
		std::pair<int,int> pi;
		pi=pq.top();
		pq.pop();
		int p=0;
		for(int i=0;i<start_index.size();i++)
		{int mi,ma;
			mi=std::min(start_index[i],pi.second);
			ma=std::max(start_index[i],pi.second);
			if(mi+m-1>=ma) {p=1; break;}
		}
		if(p==0)
		{
			limit--;
			start_index.push_back(pi.second);
			sum+=pi.first;
		}
	}
	std::cout<<sum;
}