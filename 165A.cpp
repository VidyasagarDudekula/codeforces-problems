#include<bits/stdc++.h>
void check(std::vector<std::pair<int,int>> v, int ind, int *u, int *d, int *r, int *l)
{
  for(int i=0;i<v.size();i++)
  {
    if(v[i].first==v[ind].first)
    {
      if(v[i].second<v[ind].second) *d=1;
      else if(v[i].second>v[ind].second) *u=1;
    }
    else if(v[i].second==v[ind].second)
    {
      if(v[i].first<v[ind].first) *l=1;
      else if(v[i].first>v[ind].first) *r=1;
    }
  }
}

int main()
{
  int n;
  std::cin>>n;
  std::vector<std::pair<int,int>> v;
  for(int i=0;i<n;i++)
  {
    std::pair<int,int> p;
    std::cin>>p.first>>p.second;
    v.push_back(p);
  }
  int c=0;
  for(int i=0;i<n;i++)
  {
    int u=0,d=0,r=0,l=0;
    check(v,i,&u,&d,&r,&l);
    if(u && d && r && l) c++;
  }
  std::cout<<c;
}