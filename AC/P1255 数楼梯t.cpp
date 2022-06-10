#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
//	freopen("a.txt","r",stdin);
	int n;
	register int i,j,k;
	long long v[5000];
	cin>>n; 
	v[1]=1;
	v[2]=2;
	for(i=3;i<=n;i++)
	{
		v[i]=v[i-1]+v[i-2];
	} 
	cout<<v[n];
	return 0;
 } 
