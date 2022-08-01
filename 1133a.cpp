#include<bits/stdc++.h>
int hours(std::string s)
{
	int i=0;
	int h=0;
	while(s[i]!=':')
	{
		h*=10;
		h+=(s[i]-'0');
		i++;
	}
	return h;
}
int minutes(std::string s)
{
	int i=0;
	int m=0;
	while(s[i]!=':'){i++;}
	i++;
	while(i<s.length())
	{
		m*=10;
		m+=(s[i]-'0');
		i++;
	}
	return m;
}
int main()
{
	std::string s1,s2;
	std::getline(std::cin,s1);
	std::getline(std::cin,s2);
	int h1=0,h2=0,c=0;
	int i=0;
	h1=hours(s1);
	h2=hours(s2);

	int m1=minutes(s1);
	int m2=minutes(s2);

	//std::cout<<h1<<" "<<h2<<" "<<m1<<" "<<m2<<"\n";
	c=std::abs(h1-h2)*60;
	c+=m2;
	if(m1>0)
	c-=(m1-1);
	c/=2;
	//std::cout<<"c:-"<<c<<"\n";
	while(c--)
	{
		m1++;
		if(m1==60){m1=0; h1++;}
	}
	if(h1<10)
		std::cout<<"0";
	std::cout<<h1<<":";
	if(m1<10)
		std::cout<<"0";
	std::cout<<m1;
}