#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	freopen("a.txt","r",stdin);
	int n,m,i,j,t,a[200000],b[1000]; 
  	cin>>n>>m;//ºòÑ¡ÈË Æ±Êý
  	for(i=1;i<=m;i++)
  	{
		cin>>t;
		b[t]++;
	}
	for(i=1;i<=n;i++)
  	{
		for(j=1;j<=b[i];j++)
		cout<<i<<" ";
	}
    return 0;
 } 
