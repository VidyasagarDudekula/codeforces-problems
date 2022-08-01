#include <bits/stdc++.h>
bool isPossible(std::vector<int> v,int k,int t)
{
	int i=k-1;
	int start=-1;
	//std::cout<<"k:-"<<k<<"\n";
	while(i<=v.size()-1)
	{
		int l=0;
		if(start>-1)
			l=v[start];
		int sum=v[i]-l;
		i++;
		start++;
		if(sum<=t) return true;
	}
	return false;
}
int main()
{
	int n,t;
	std::cin>>n>>t;
	long long int sum=0,l=0;
	std::vector<int>v(n,0);
	for(int i=0;i<n;i++)
	{
		std::cin>>l;
		sum+=l;
		v[i]=sum;
	}
	int start=1,end=n,m=0;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(isPossible(v,mid,t))
		{
			m=mid;
			start=mid+1;
		}
		else end=mid-1;
	}
	std::cout<<m;
}