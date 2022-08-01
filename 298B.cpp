#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int x1,y1,x2,y2;
    std::cin>>x1>>y1>>x2>>y2;
    std::string s;
    std::cin>>s;
    int t=0;
    int x_req=x2-x1,y_req=y2-y1;
    if(x_req!=0)
    {   char ch;
        if(x_req>0) ch='E';
        else ch='W';
        x_req=std::abs(x_req);
        int c=0;
        for(int i=0;i<s.length();i++){
        if(s[i]==ch) c++;
        if(c==x_req) {t+=(i+1); break;}
        }
        if(c<x_req) {std::cout<<-1<<"\n"; return 0;}
    }
    if(y_req!=0)
    {   char ch;
        if(y_req>0) ch='N';
        else ch='S';
        y_req=std::abs(y_req);
        int c=0;
        for(int i=0;i<s.length();i++){
        if(s[i]==ch) c++;
        if(c==y_req) {t=std::max((i+1),t); break;}
        }
        if(c<y_req) {std::cout<<-1<<"\n";return 0;}
    }
    std::cout<<t;
}