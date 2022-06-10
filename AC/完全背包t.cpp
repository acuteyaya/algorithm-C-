#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	freopen("a.txt","r",stdin);
	long long n,t,i,j;
	long long m[10000],v[10000],ans[10000000];
	memset(ans,0,sizeof(ans));
  	scanf("%d %d",&t,&n);
  	for(i=1;i<=n;i++)
  	{
  		scanf("%d %d",&m[i],&v[i]);
  		for(j=m[i];j<=t;j++)
	  	{
	  		ans[j]=max(ans[j],ans[j-m[i]]+v[i]);
		}
	}
	cout<<ans[t];
	//printf("%.2f",(float)ans[t]);
    return 0;
 } 
