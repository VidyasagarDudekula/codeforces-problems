#include<bits/stdc++.h>
int main()
{
	int n,k;
	std::cin>>n>>k;
	std::vector<std::vector<int>>mat;
	for(int i=0;i<n;i++)
	{
		std::vector<int>b(k+1,0);
		mat.push_back(b);
	}
	std::vector<std::vector<int>>v;
	int m=0;
	for(int i=0;i<n;i++){
		int l=0;
		std::cin>>l;
		std::vector<int>b(l,0);
		m=std::max(m,l);
		v.push_back(b);
	}

	int j=0,c=1;
	while(j<m)
	{
		for(int i=0;i<n;i++)
		{
			if(j<v[i].size())
			{
				v[i][j]=c;
				mat[i][c]+=1;
			}
		}
		c++;
		j++;
		if(c>k)
			c=1;
	}

	for(int j=1;j<=k;j++)
	{
		int l=0,s=200;
		for(int i=0;i<n;i++)
		{
			l=std::max(l,mat[i][j]);
			s=std::min(s,mat[i][j]);
		}
		if(l-s>1)
		{
			std::cout<<"NO";
			return 0;
		}
	}

	std::cout<<"YES\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v[i].size();j++)
			std::cout<<v[i][j]<<" ";
		std::cout<<"\n";
	}
}