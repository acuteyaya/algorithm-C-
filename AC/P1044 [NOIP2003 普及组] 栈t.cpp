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
int ans[20][20];
int main()
{
	//freopen("a.txt","r",stdin);
	int n,m,sum=1;
	int i,j;//i Õ»Àï  j Õ»Íâ 
  	cin>>n;
  	for(i=0;i<=n;i++) ans[i][0]=1;
	for(j=1;j<=n;j++)
	{
		for(i=0;i<=n;i++)
		{
  			if(!i) ans[i][j]=ans[i+1][j-1];//Èë 
			else ans[i][j]=ans[i-1][j]+ans[i+1][j-1];
  		} 
	}
	cout<<ans[0][n];
    return 0;
 } 
