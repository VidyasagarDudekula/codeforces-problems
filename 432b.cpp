#include<bits/stdc++.h>
int main()
{
	int n;
	std::cin>>n;
	std::vector<int> home_kit(n,0);
	std::vector<int> away_kit(n,0);
	std::map<int,int> home_kit_map;
	std::map<int,int> away_kit_map;
	for(int i=0;i<n;i++)
	{
		std::cin>>home_kit[i]>>away_kit[i];
		if(home_kit_map.find(home_kit[i])!=home_kit_map.end())
			home_kit_map[home_kit[i]]++;
		else home_kit_map[home_kit[i]]=1;
		if(away_kit_map.find(away_kit[i])!=away_kit_map.end())
			away_kit_map[away_kit[i]]++;
		else away_kit_map[away_kit[i]]=1; 
	}

	long long int home=0,away=0;
	for(int i=0;i<n;i++)
	{
		home=n-1;
		away=0;
		int c=0;
		if(home_kit_map.find(away_kit[i])!=home_kit_map.end())
			c=home_kit_map[away_kit[i]];
		home+=c;
		away=n-1-c;
		std::cout<<home<<" "<<away<<"\n";
	}
}