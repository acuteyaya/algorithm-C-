#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	freopen("a.txt","r",stdin);
	int n,m;
	register int i,j,k;
	int v[100000];
	cin>>n>>m; 
	for(i=1;i<=m;i++) cin>>v[i];
	sort(v+1,v+m+1);
	int sum=0,temp=0;
	i=1;
	j=m;
	while(i!=j)
	{
		if(v[j]+v[i]<=n)
		{
			v[j]+=v[i];
			i++;
		}
		else
		{
			sum++;
			j--; 
		} 
	}
	
	cout<<sum;
	return 0;
 } 
