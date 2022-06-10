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
int main()
{
//	freopen("a.txt","r",stdin);
	int n,m;
	int ans[10001]={0},a[101]={0};
	int i,j,k;
  	cin>>n>>m;
  	for(i=1;i<=n;i++)
  	{
  		cin>>a[i];
	}
	ans[0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=m;j>=a[i];j--)
  		{
	  		ans[j]+=ans[j-a[i]];
		  	
		}
	}
	cout<<ans[m];
    return 0;
 } 
