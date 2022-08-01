#include<bits/stdc++.h>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int one,two;
        std::cin>>one>>two;
        if(one==0) std::cout<<1<<"\n";
        else{
            two*=2;
            std::cout<<one+two+1<<"\n";
        }
    }
}