#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long long int a,b,c;
		double A,B,C;
		std::cin>>a>>b>>c;
		A=(double)a;
		B=((double)c)/b;
		if(A<B)
			std::cout<<1<<" "<<-1<<"\n";
		else if(A>B)
			std::cout<<-1<<" "<<b<<"\n";
		else if(A==B)
		{
			if(b==1) std::cout<<-1<<" "<<-1<<"\n";
			else std::cout<<b+1<<" "<<-1<<"\n";
		}
	}
}