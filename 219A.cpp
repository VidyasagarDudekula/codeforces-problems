#include<bits/stdc++.h>
int main()
{
    int k;
    std::cin>>k;
    std::string s;
    std::cin>>s;
    std::vector<std::pair<int,int>> v(26);
    int m=0;
    for(int i=0;i<s.length();i++)
    v[s[i]-97].first++;

    char c[s.length()];
    for(int i=0;i<26;i++)
    {
        if(v[i].first%k!=0) {std::cout<<-1; return 0;}
        else v[i].second=v[i].first/k;
    }

    int l=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(v[j].first>0)
            {
                for(int h=0;h<v[j].second;h++)
                c[l++]=j+97;
                v[j].first-=v[j].second;
            }
        }
    }
    for(int i=0;i<l;i++)
    std::cout<<c[i];
}