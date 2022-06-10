#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<cmath>
using namespace std;
int main()
{
	freopen("a.txt","r",stdin);
	unsigned long long a,b,n,sum=0,aweek,t1,t2;
	//a+b
	int i,j,k;
	cin>>a>>b>>n;
	aweek=a*5+b*2;
	t1=n%aweek;
	t2=n/aweek;
	if(!t1) 
	{
		cout<<t2*7;
		return 0;
	}
	k=0;
	for(i=1;i<=5;i++)
	{
		sum+=a;
		k++;
		if(sum>=t1) 
		{
			cout<<t2*7+k;
			return 0;
		}
	}
	for(i=1;i<=2;i++)
	{
		sum+=b;
		if(sum>=t1) 
		{
			cout<<t2*7+k;
			return 0;
		}
	}
	return 0;
} 
