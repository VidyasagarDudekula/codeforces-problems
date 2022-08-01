#include<bits/stdc++.h>
int main()
{
    int n,k;
    std::cin>>k>>n;
    std::vector<int> v(n,0);
    for(int i=0;i<n;i++)
    std::cin>>v[i];

    std::sort(v.begin(), v.end());
    int d=12345;
    for(int i=0;i<n;i++)
    for(int i=0;i<n-k+1;i++)
    d=std::min(d,v[i+k-1]-v[i]);

    std::cout<<d;
}