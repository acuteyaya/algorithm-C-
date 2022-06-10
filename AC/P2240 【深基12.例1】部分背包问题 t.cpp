#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
struct ya{
	double x;
	double y;
	double v;
}V[200];
bool cmp(ya a,ya b)
{
  return a.v>b.v;
}
int main()
{
	freopen("a.txt","r",stdin);
	long long n,t,i,j;
	double sum=0.00;
  	cin>>n>>t;
  	for(i=1;i<=n;i++)
  	{
  		cin>>V[i].x>>V[i].y;
  		V[i].v=V[i].y/V[i].x;
	}	
	sort(V+1,V+n+1,cmp);
	for(i=1;i<=n;i++)
  	{
  		if(t>=V[i].x)
  		{
  			sum+=V[i].y;
  			t-=V[i].x;
		}
		else
		{
			sum+=V[i].v*t;
			break;
		}
	}
	printf("%.2lf",sum);
	return 0;
 } 
