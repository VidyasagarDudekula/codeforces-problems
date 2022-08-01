#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		std::cin.ignore();
		std::string s;
		std::getline(std::cin,s);
		int k=0;
		for(int i=0;i<=n/2;i++)
		{
			int j=n-1-i;
			if(s[i]!=s[j])
			{
				int I=s[i];
				int J=s[j];
				if(std::abs(I-J)!=2)
				{
					k=1;
					break;
				}
			}
		}
		if(k==1)
			std::cout<<"NO\n";
		else std::cout<<"YES\n";
	}
}