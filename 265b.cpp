#include<bits/stdc++.h>
int main()
{
	int n;
	std::cin>>n;
	std::vector<int>v(n,0);
	for(int i=0;i<n;i++)
		std::cin>>v[i];
	int time=0,last_height=0;
	for(int i=0;i<n;i++)
	{
		if(i>0) time++;
		int l=std::min(last_height,v[i]);
		time+=std::abs(l-v[i]);
		if(v[i]<last_height)
			time+=(last_height-v[i]);
		//collect fruit
		time+=1;
		last_height=v[i];
	}
	std::cout<<time;
}