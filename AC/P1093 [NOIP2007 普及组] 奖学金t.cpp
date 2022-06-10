#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct stu{
	int yw;
	int sx;
	int yy;
	int xh;
	int all;
};
bool cmp(stu i,stu j)
{
	if(i.all==j.all)
	{
		if(i.yw==j.yw)
		{
			return i.xh<j.xh;
		}
		else
		{
			return i.yw>j.yw;
		}
	}
	else 
	{
		return i.all>j.all;
	}
}
int main()
{
	freopen("a.txt","r",stdin);
	int n,i;
	stu x[500];
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{
  		cin>>x[i].yw>>x[i].sx>>x[i].yy;
  		x[i].all=x[i].yw+x[i].sx+x[i].yy;
  		x[i].xh=i;
	}
	sort(x+1,x+n+1,cmp);
	for(i=1;i<=n;i++)
  	{
  		cout<<x[i].xh<<" "<<x[i].all<<endl;
	}
    return 0;
 } 
