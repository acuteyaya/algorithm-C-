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
	int sum=0,v[100000],temp;
	cin>>n; 
	for(i=0;i<n;i++) cin>>v[i];
	for(i=1;i<n;i++)
	{
		if(v[i]>v[i-1])
		 sum+=v[i]-v[i-1];
	} 
	cout<<sum+v[0];
	return 0;
 } 
