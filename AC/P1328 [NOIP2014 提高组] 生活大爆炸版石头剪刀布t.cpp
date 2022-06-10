#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int ans1,ans2; 
void wz(int x,int y)
{
	if(x!=y)
	{
		if(x==0)
		{
			if(y==2||y==3) ans1++;
			else ans2++;
		}
		else if(x==1)
		{
			if(y==3||y==0) ans1++;
			else ans2++;
		}
		else if(x==2)
		{
			if(y==4||y==1) ans1++;
			else ans2++;
		}
		else if(x==3)
		{
			if(y==4||y==2) ans1++;
			else ans2++;
		}
		else if(x==4)
		{
			if(y==0||y==1) ans1++;
			else ans2++;
		}
	}
	 
}
int main()
{
	freopen("a.txt","r",stdin);
	int n,m,a1,b1;
	int a[1000],b[1000];
	int i,j,k;
	int sum1=0,sum2=0;
  	cin>>n>>a1>>b1;
  	for (i=1;i<=a1;i++) 
  	{
  		cin>>a[i];
  	}
  	for (i=1;i<=b1;i++) 
  	{
  		cin>>b[i];
  	}
  	int k1=1,k2=1;
  	for (i=1;i<=n;i++) 
  	{
  		wz(a[k1],b[k2]);
  		k1++;k2++;
  		if(k1==a1+1) k1=1;
  		if(k2==b1+1) k2=1;
  	}
  	cout<<ans1<<" "<<ans2;
    return 0;
 } 
