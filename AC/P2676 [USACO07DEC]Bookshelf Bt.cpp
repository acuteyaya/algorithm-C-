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
bool cmp(int x,int y){return x>y;} 
int main()
{
	freopen("a.txt","r",stdin);
	int n,m;
	int i,j,k;
	int a[20001];
  	cin>>n>>m;
  	for(i=1;i<=n;i++)
  	{
  		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int sum=0,c=0;
	for(i=1;i<=n;i++)
  	{
  		sum+=a[i];
  		c++;
  		if(sum>=m)
  		{
  			cout<<c;
			  return 0; 
		  }
	}
    return 0;
 } 
