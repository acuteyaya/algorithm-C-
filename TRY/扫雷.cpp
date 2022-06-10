#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<cmath>
using namespace std;
struct ya{
	long long x,y,r,num;
}p[10000];
set<long long> A[10000];
set<long long> B;
int main()
{
//	freopen("a.txt","r",stdin);
	long long n,m,i,j,k;
	long long x,y,r;
	long long sum=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>p[i].x>>p[i].y>>p[i].r;
		p[i].num=i;
		A[i].insert(i);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j) continue;
			if(pow(p[i].x-p[j].x,2)+pow(p[i].y-p[j].y,2)<=pow(p[i].r,2))
			{
				for(set<long long>::iterator u=A[j].begin();u!=A[j].end();u++)
				{
					A[i].insert(*u);
				}
			}
		}
	}
	/*
	for(i=1;i<=n;i++)
	{
		for(set<int>::iterator u=A[i].begin();u!=A[i].end();u++)
		{
			cout<<*u<<" ";
		}
		cout<<endl;
	}
	*/
	for(i=1;i<=m;i++)
	{
		cin>>x>>y>>r;
		for(j=1;j<=n;j++)
		{
			if(B.count(j)==0)
			{
				if(pow(x-p[j].x,2)+pow(y-p[j].y,2)<=pow(r,2))
				{
					for(set<long long>::iterator u=A[j].begin();u!=A[j].end();u++)
					{
						B.insert(*u);
					}
				}
			}
		}
	}
	cout<<B.size();
	return 0;
} 
