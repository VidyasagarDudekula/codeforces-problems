#include<bits/stdc++.h>
int main()
{
	int n,m;
	std::cin>>n;
	std::vector<int>v;
	std::vector<int>ma;
	m=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int k;
		std::cin>>k;
		v.push_back(k);
		m=std::max(m,k);
		ma.push_back(m);
	}
	std::cin>>m;
	long long int index,upto,prev;
	for(int i=0;i<m;i++)
	{
		int w,h;
		std::cin>>w>>h;
		w--;
		if(i==0)
		{
			prev=ma[w];
			index=w; upto=ma[w]+h;
		}
		else{
			if(w<=index)
			{
				prev=upto;
				upto+=h;
			}
			else if(upto>=ma[w])
			{   prev=upto;
				index=w; upto+=h;
			}
			else
			{	prev=ma[w];
				index=w; upto=ma[w]+h;
			}
		}
		std::cout<<prev<<"\n";
	}
}