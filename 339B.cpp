#include<bits/stdc++.h>
int main()
{
    unsigned long long int n,m;
    std::cin>>n>>m;
    std::vector<unsigned long long int> v;
    unsigned long long int k;
    for(unsigned long long int i=0;i<m;i++)
    {
        std::cin>>k;
        if(i==0) v.push_back(k);
        else{
            if(v[v.size()-1]!=k) v.push_back(k); 
        }
    }
    unsigned long long int t=0,cur=1;
    for(unsigned long long int i=0;i<v.size();i++)
    {
        if(i>0 && v[i]> cur) t+=(v[i]-cur);
        else if(i>0 && v[i]<cur) t=t+(n-cur)+(v[i]-1)+1;
        else t+=(v[i]-cur);
        cur=v[i];
    }
    std::cout<<t;
}