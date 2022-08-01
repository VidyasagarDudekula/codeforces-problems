#include<bits/stdc++.h>
int main()
{
    int n,m;
    std::cin>>n>>m;
    std::unordered_map<int,int> mp;
    int k,l;
    for(int i=0;i<m;i++)
    {
        std::cin>>k>>l;
        mp[k]=1; mp[l]=1;
    }
    k=1;
    for(int i=1;i<=n;i++)
        if(!mp[i]) k=i;
    
    for(int i=1;i<=n;i++)
        if(i!=k)
            std::cout<<i<<" "<<k<<"\n";
}