#include<bits/stdc++.h>
int k,l;
void spaces(int i,int n)
{
    if(i<=n)
    for(int j=n-i-1;j>=0;j--) std::cout<<"  ";
    else
    {
        for(int j=1;j<=n-k;j++) std::cout<<"  ";
        k--;
    }
}
void elements(int i,int n)
{
    if(i<=n)
    {
        for(int j=0;j<=i;j++) {std::cout<<j; if(i!=0) std::cout<<" ";}
        for(int j=i-1;j>=0;j--) {std::cout<<j; if(j>0) std::cout<<" "; }
    }
    else{
        for(int j=0;j<=l;j++) {std::cout<<j; if(l!=0) std::cout<<" ";}
        for(int j=l-1;j>=0;j--) {std::cout<<j; if(j>0) std::cout<<" ";}
        l--;
    }
}
int main()
{
    int n;
    std::cin>>n;
    k=n-1,l=n-1;
    for(int i=0;i<(2*n+1);i++)
    {
        spaces(i,n);
        elements(i,n);
        std::cout<<"\n";
    }
}