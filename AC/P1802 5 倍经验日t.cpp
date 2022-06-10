#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
struct play
{
	long long w;
	long long l;
	long long v;
	long long x;
}o[1005]; 
int main()
{
	freopen("a.txt","r",stdin);
//	freopen("b.txt","w",stdout);
	long long n,m,sum=0;
    long long i,j,k=0,ans[1005]={0};
	cin>>n>>m;
	for(i=0;i<n;i++) 
	{
		cin>>o[i].l>>o[i].w>>o[i].v;
	}
	for(i=0;i<n;i++)
	{
		for(j=m;j>=o[i].v;j--)
		{
			ans[j]=max(ans[j]+o[i].l,ans[j-o[i].v]+o[i].w);
		}
		for(j=o[i].v-1;j>=0;j--)
		{
			ans[j]=max(ans[j]+o[i].l,ans[j]);
		}
	}
	

	cout<<(ans[m]+sum)*5;
	//cout<<x;
	return 0; 
 } 
 

