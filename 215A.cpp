#include<bits/stdc++.h>
int ratio(std::vector<int> a,int n,std::vector<int> b,int m)
{
    std::pair<int,int> p{-1,-1};
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(b[j]%a[i]==0)
            {
                if((b[j]/a[i])>p.first){p.first=(b[j]/a[i]); p.second=1;}
                else if((b[j]/a[i])==p.first) p.second++;
                else break;
            }
        }
    }
    return p.second;
}
int main()
{
    int n,m;
    std::cin>>n;
    std::vector<int>a;
    for(int i=0;i<n;i++)
    {
        int k;
        std::cin>>k;
        a.push_back(k);
    }
    std::cin>>m;
    std::vector<int>b;
    for(int i=0;i<m;i++)
    {
        int k;
        std::cin>>k;
        b.push_back(k);
    }
    std::cout<<ratio(a,n,b,m);
}