#include<bits/stdc++.h>
int main()
{
	int n;
	std::cin>>n;
	int suma=0,sumb=0,sumc=0;
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		std::cin>>a>>b>>c;
		suma+=a;
		sumb+=b;
		sumc+=c;
	}
	if(suma==0 && sumb==0 && sumc==0)
	{
		std::cout<<"YES";
	}
	else std::cout<<"NO";
}