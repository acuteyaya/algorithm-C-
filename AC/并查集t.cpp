#include<iostream>
/*
��һ�а����������� N,M,��ʾ���� N��Ԫ�غ� M��������
������ M��ÿ�а����������� Zi,Xi,Yi,
1 ���ڵļ��Ϻϲ���
2 �Ƿ���ͬһ�����ڣ��ǵ���� Y ��������� N 
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
