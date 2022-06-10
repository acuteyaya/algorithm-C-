#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	freopen("a.txt","r",stdin);
	int n,x;
	register int i,j;
	int v[10000],sum=0;
	cin>>n>>x; 
	for(i=0;i<n;i++) cin>>v[i];
	if(v[0]>x) 
	{
		sum=v[0]-x;
		v[0]=x;
	}
  	for(i=1;i<n;i++) 
  	{
  		int temp=v[i-1]+v[i];
  		if(temp>x)
  		{
			sum+=temp-x;
  		 	v[i]-=temp-x;
		}	
	}
	cout<<sum;
	return 0;
 } 
