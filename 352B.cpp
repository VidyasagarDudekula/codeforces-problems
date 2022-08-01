#include<bits/stdc++.h>
int main()
{
    int n,k,b=0;
    std::cin>>n;
    std::vector<int> v(n+1,0);
    std::map<int,std::pair<int,int>> p;
    for(int i=1;i<=n;i++)
    {
        std::cin>>k;
        if(p[k].first==0) {p[k].first=i; p[k].second=0;}
        else if(p[k].first>0 && p[k].second==0) {p[k].second=i-p[k].first; p[k].first=i;}
        else if(p[k].second>0) 
        {
            if(i-p[k].first!=p[k].second) {p[k].first=-1; p[k].second=-1; b++;}
            else p[k].first=i;
        }
    }
    std::cout<<p.size()-b<<"\n";
    for(auto it:p)
    {
        if(it.second.second>=0)
        std::cout<<it.first<<" "<<it.second.second<<"\n";
    }
}