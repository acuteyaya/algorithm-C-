#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
typedef long long _;
_ i,j,k,T,sum,i11,n,m,ans[1000001];
struct wz
{
	_ u,v,w;
};
struct xx
{
	bool operator()(wz a,wz b)
	{
		return a.w>b.w;
	}
};
wz x;
priority_queue<wz,vector<wz>,xx>x1;
inline _ wzwz(_ p)
{
	return ans[p]==p?p:(ans[p]=wzwz(ans[p]));
}
int main()
{
	//freopen("a.txt","r",stdin);
	 //cin>>T;
	 //for(i11=1;i11<=T;i11++)
	 //{
	 	cin>>n>>m;
	 	for(i=1;i<=n;i++) ans[i]=i;
	 	for(i=1;i<=m;i++)
	 	{
	 		cin>>x.u>>x.v>>x.w;
	 		x1.push(x);
		}
	
	 _ kk=n;
	 while(!x1.empty())
	 {
	 	_ fx,fy;
	  x=x1.top();
	  x1.pop();
	  fx=wzwz(x.u);
	  fy=wzwz(x.v);
	  if(fx!=fy)
	  {
	  	ans[fx]=fy;
	  	sum+=x.w;
	  	kk--;
      }
	  if(k==1) break;
	} 
 //cout<<x.w<<" "<<x.u;
 cout<<sum;
    // }
	return 0;
}       
