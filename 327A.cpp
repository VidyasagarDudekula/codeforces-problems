#include<bits/stdc++.h>
int main()
{
	int n;
	std::cin>>n;
	std::vector<int> v;
	int c=0,p=-1,val,one=0;
	for(int i=0;i<n;i++)
	{
		std::cin>>val;
		if(p!=val && p!=-1)
		{
			v.push_back(c); c=0;
		}
		if(val==1){ c--; one++;} 
		else c++;
		p=val;
	}
	v.push_back(c);
    int m=one,sum=0;c=0;
    if(one==n) m--;
	for(int i=0;i<v.size();i++)
	{
        if(v[i]<0) c+=v[i];
        else sum+=v[i];
        if(m<one+sum+c) m=one+sum+c;
        if(sum+c<0) {sum=0; c=0;}
	}
	std::cout<<m;
}