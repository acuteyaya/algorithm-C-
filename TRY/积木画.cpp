#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<cmath>
using namespace std;
int n,s=1,ans[10000001];
int main()
{
//	freopen("a.txt","r",stdin);
	cin>>n;
	ans[1]=1;
	ans[2]=2;
	for(int i=2;i<=n;i++)
	{
		ans[i+1]=(ans[i]+ans[i-1])%1000000007;
		s+=ans[i];
		s%=1000000007;
	}
	cout<<s-1;
	return 0;
} 
