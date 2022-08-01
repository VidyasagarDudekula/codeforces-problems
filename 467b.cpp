#include<bits/stdc++.h>
int main()
{
	int n,k,m;
	std::cin>>n>>m>>k;
	std::vector<long long int >v(m+1,0);
	for(int i=0;i<=m;i++)
		std::cin>>v[i];

	int count_friends=0;
	for(int i=0;i<m;i++)
	{
		long long int p=v[m];
		long long int q=v[i];
		int count_max=0;
		for(int j=0;j<=20;j++)
		{
			if(((p>>j)&1)!=((q>>j)&1)){
				count_max++;
			}
		}	
		//std::cout<<q<<":- "<<count_max<<"\n";
		if(count_max<=k) count_friends++; 
	}
	std::cout<<count_friends<<"\n";
}