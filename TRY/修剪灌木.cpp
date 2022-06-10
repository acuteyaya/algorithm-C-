#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<cmath>
using namespace std;
int n,a[10001],ans[10001],i,tag=0,k,j;
int main()
{
//	freopen("a.txt","r",stdin);
	cin>>n;
	k=1;
	for(j=1;j<=n*3;j++)
	{
		for(i=1;i<=n;i++)
		{
			a[i]+=1;
			ans[i]=max(ans[i],a[i]);
		}
		a[k]=0;
		if(tag==0)
		{
			k++;
		}
		else
		{
			k--;
		}
		if(k==n) tag=1;
		if(k==1) tag=0;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
} 
