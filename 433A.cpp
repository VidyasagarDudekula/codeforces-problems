#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    std::vector<int> v(2,0);
    for(int i=0;i<n;i++)
    {
        int k;
        std::cin>>k;
        if(k==100) v[0]++;
        else v[1]+=2;
    }
    if(n==1) {std::cout<<"NO"; return 0;}
    if((v[0]+v[1])%2) std::cout<<"NO";
    else std::cout<<"YES";
}