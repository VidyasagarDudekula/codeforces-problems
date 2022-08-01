#include<bits/stdc++.h>
int main()
{
	int n;
	std::cin>>n;
	std::vector<int>v(n,0);
	for(int i=0;i<n;i++)
		std::cin>>v[i];
	int rise_count=0,where=0;
	for(int i=0;i<n-1;i++)
	{
		if(v[i]>v[i+1])
		{
			where=i+1;
			rise_count++;
		}
	}
	if(rise_count>1)
		std::cout<<-1;
	else{
		if(rise_count==1 && v[0]>=v[v.size()-1]){
			int k=n-1;
			std::cout<<k-where+1;
		}
		else if(rise_count==1)
			std::cout<<-1;
		else if(rise_count==0)
			std::cout<<0;
	}
}