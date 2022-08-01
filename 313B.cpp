#include<bits/stdc++.h>
int main()
{
    std::string s;
    std::getline(std::cin,s);
    std::vector<int> com(s.length()+2,0);
    int c=0; com[0]=com[1]=0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) c++; 
        com[i+1]=c;
    }
    int t;
    std::cin>>t;
    while(t--)
    {
        int l,r;
        std::cin>>l>>r;
        std::cout<<com[r]-com[l]<<"\n";
    }
}