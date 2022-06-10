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
struct ya{
	int x;
	int y;
	int z;
}ws1[50001],t; 
bool cmp(ya x,ya y)
{
	return x.z<y.z;
}
int main()
{
	freopen("a.txt","r",stdin);
	int n,m;
	int i,j,k;
	double sum=0;
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{
  		cin>>ws1[i].x>>ws1[i].y>>ws1[i].z;
	}
	sort(ws1+1,ws1+1+n,cmp);
	t.x=ws1[1].x;t.y=ws1[1].y;t.z=ws1[1].z;
	for(i=2;i<=n;i++)
  	{
  		sum+=sqrt(pow((ws1[i].x-t.x),2)+pow((ws1[i].y-t.y),2)+pow((ws1[i].z-t.z),2));
  		t.x=ws1[i].x;t.y=ws1[i].y;t.z=ws1[i].z;
	}
	printf("%.3lf",sum);
    return 0;
 } 
