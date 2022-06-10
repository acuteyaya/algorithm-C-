#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
struct wz{
	int v;
	int m;
}ya[100000];
bool cmp(wz x,wz y)
{
	return x.v<y.v;
}
int main()
{
	freopen("a.txt","r",stdin);
	long long n,t,sum=0;
	register int i,j,k;
	cin>>n>>t; 
	for(i=1;i<=t;i++) cin>>ya[i].v>>ya[i].m;
	sort(ya+1,ya+t+1,cmp);
	for(i=1;i<=t;i++)
	{
		if(n>ya[i].m)
		{
			sum+=ya[i].m*ya[i].v;
			n-=ya[i].m;
		}
		else{
			sum+=ya[i].v*n;
			cout<<sum;
			return 0;
		}
		//cout<<ya[i].v<<" "<<ya[i].m<<endl;
	} 
	cout<<sum;
	return 0;
 } 
