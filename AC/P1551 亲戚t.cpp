#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int ans[5000];
int wz(int k)
{
	if(ans[k]==k)
	{
		return k;
	}
	else
	{
		ans[k]=wz(ans[k]);
		return 	ans[k];
	}
}
int main()
{
	freopen("a.txt","r",stdin);
	int n,m,p,x,y;
	int i,j,k;
  	cin>>n>>m>>p;
  	for(i=1;i<=n;i++)
  	{
  		ans[i]=i;
	}
	for(i=1;i<=m;i++)
  	{
  		cin>>x>>y;
  		if(wz(x)!=wz(y))
	  	 ans[wz(x)]=wz(y);
	}
	for(i=1;i<=p;i++)
  	{
  		cin>>x>>y;
  		if(wz(x)==wz(y)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
    return 0;
 } 
