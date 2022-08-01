#include<bits/stdc++.h>
int main()
{
    int t;
    std::cin>>t;
    std::cin.ignore();
    int x=0;
    while(t--)
    {
        std::string s;
        std::getline(std::cin,s);
        if(s[1]=='+') x++;
        else x--;
    }
    std::cout<<x<<"\n";
}