#include<iostream>
/*
第一行包含两个整数 N,M,表示共有 N个元素和 M个操作。
接下来 M行每行包含三个整数 Zi,Xi,Yi,
1 所在的集合合并。
2 是否在同一集合内，是的输出 Y ；否则输出 N 
*/
using namespace std;
int n,m,x,y,z,i,j,ans[10001];
int wz(int k)
{
	if(ans[k]==k)
	{
		return k;
	}
	else
	{
		ans[k]=wz(ans[k]);
	}
	//return ans[k]==k?k:(ans[k]=wz(ans[k]));
}
int main()
{
	freopen("a.txt","r",stdin);
  	cin>>n>>m;
  	for(i=1;i<=n;i++) ans[i]=i;
  	for(i=1;i<=m;i++)
  	{
  	  cin>>x>>y>>z;
  	  if(x==2)
  	  {
  	  	 if(wz(y)==wz(z)) cout<<"Y"<<endl;
  	  	 else cout<<"N"<<endl;
	  }
	  if(x==1)
	  {
	  	if(wz(z)!=wz(y))
	  	 ans[wz(z)]=wz(y);
	  }
	}
    return 0;
 } 
