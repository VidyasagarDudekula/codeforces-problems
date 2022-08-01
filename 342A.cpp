#include<bits/stdc++.h>
int main()
{
	long long int n;
	std::cin>>n;
	std::vector<int>v(8,0);
	for(long long int i=0;i<n;i++)
	{
		int k;
		std::cin>>k;
		v[k]++;
	}
	if(v[1]==0 || v[7]>0 || v[5]>0) {std::cout<<-1; return 0;}
	else if(v[1]!=v[2]+v[3]) std::cout<<-1<<"\n";
	else if(v[2]!=v[4]+v[6]-v[3]) std::cout<<-1<<"\n";
	else if(v[2]==0 && v[3]!=v[6]) std::cout<<-1<<"\n";
	else if(v[6]-v[3] <0) std::cout<<-1<<"\n";
	else{
		while(v[4]--)
			std::cout<<1<<" "<<2<<" "<<4<<"\n";
		if(v[6]) v[6]-=v[3];
		while(v[6]--)
			std::cout<<1<<" "<<2<<" "<<6<<"\n";
		while(v[3]--)
			std::cout<<1<<" "<<3<<" "<<6<<"\n";
	}
}