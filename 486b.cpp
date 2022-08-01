#include<bits/stdc++.h>
int main()
{
	int n,m;
	std::cin>>n>>m;
	std::vector<std::vector<int>>v;
	std::vector<std::vector<int>>v1(n);
	for(int i=0;i<n;i++)
	{
		std::vector<int> b(m,0);
		std::vector<int> b1(m,0);
		for(int j=0;j<m;j++){
			std::cin>>b[j];
		}
		v.push_back(b);
	}

	std::vector<int> zero_row(n,0);
	std::vector<int> zero_column(m,0);
	std::vector<int> one_row(n,0);
	std::vector<int> one_column(m,0);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v[i][j]==0)
			{
				zero_row[i]=1;
				zero_column[j]=1;
			}
			else
			{
				one_row[i]=1;
				one_column[j]=1;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v[i][j]==1 && (zero_column[j]==1 || zero_row[i]==1))
				v[i][j]=0;
		}
	}

	int count=0;
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<m;j++)
		{
			if(v[i][j]==1) count++;
		}
		//std::cout<<i<<" "<<count<<" "<<one_row[i]<<"\n";
		if(count==0 && one_row[i]>0 && zero_row[i]==0)
		{
			std::cout<<"NO";
			return 0;
		}

	}
	for(int j=0;j<m;j++)
	{
		count=0;
		for(int i=0;i<n;i++)
		{
			if(v[i][j]==1) count++;
		}
		if(count==0 && one_column[j]>0 && zero_column[j]==0)
		{
			std::cout<<"NO";
			return 0;
		}
	}

	std::cout<<"YES"<<"\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			std::cout<<v[i][j]<<" ";
		}
		std::cout<<"\n";
	}
}