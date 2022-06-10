#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int n1=7;
void yafind(int n,int m,string x="")
{
	if(n-m>0) 
	{
		char temp=m+'0';
		x+=temp; 
		x+="+";
		n-=m;
		yafind(n,m,x);
		n+=m;
		m++;
		if(x.length()>=3)
		{
			x.erase(x.length()-3,2);
			yafind(n,m,x);
		}			
	}
	else if(n-m==0)
	{
		char temp=m+'0';
		x+=temp; 
		cout<<x<<endl;
	}
} 
int main()
{
//	freopen("a.txt","r",stdin);
//	freopen("b.txt","w",stdout);
	cin>>n1; 
	for(int i=1;i<=n1-1;i++) yafind(n1,i);
	return 0; 
 } 
 

