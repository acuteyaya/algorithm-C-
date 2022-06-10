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
struct ya
{
	int x,y,z;
}A[10001]; 
int ans[10001];
bool cmp(ya x,ya y)
{
	return x.z < y.z;
}
int wz(int k)
{
	if(ans[k]==k)return k;
	else return ans[k]=wz(ans[k]);
}
priority_queue <int> B; 
int main()
{
	freopen("a.txt","r",stdin);
	int n,m,sum=0,tag=1;
	int i,j,k;
	int x,y,z;
  	cin>>n>>m;
  	for(i=0;i<n;i++)
  	{
  		ans[i]=i;
  	}
  	for(i=0;i<m;i++)
  	{
  		cin>>A[i].x>>A[i].y>>A[i].z;
	}
	sort(A,A+m,cmp);
	for(i=0;i<m;i++)
  	{
  		if(wz(A[i].x)!=wz(A[i].y))
  		{
  			ans[wz(A[i].x)]=wz(A[i].y);
  			sum+=A[i].z;
  			tag++;
		} 
	}
	if(tag==n)
	{
		cout<<sum;
	}
	else
	{
		cout<<"orz";
	}
    return 0;
 } 
