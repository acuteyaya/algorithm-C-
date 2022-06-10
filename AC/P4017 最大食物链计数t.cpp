#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<queue>
#include<set>
#include<vector>
using namespace std;
queue<int> A[50001];
queue<int> t;
set<int> o;
set<int>::iterator j;
int c[50001],r[50001],n,m;
long long ans[50001],sum;
set<int> B;
void find(int i)
{
	queue<int> t1;
	t1=A[i];
	while(!t1.empty())
	{
		ans[t1.front()]=(ans[t1.front()]+ans[i])%80112002;
		r[t1.front()]--;
		//cout<<t1.front()<<endl;
		o.insert(t1.front());
		t1.pop();
	}
	for(j=o.begin();j!=o.end();j++)
	{
		if(r[*j]==0&&B.count(*j)==0)
		{
			o.erase(*j);
			B.insert(*j);//cout<<*j<<endl<<endl;
			goto wz;
		}
	}
	return;
	wz:
	find(*j);
}
int main()
{
	freopen("a.txt","r",stdin);
	int i,x,y;
  	cin>>n>>m;
  	for(i=1;i<=m;i++)
  	{
  		cin>>x>>y;
  		r[y]++;
  		c[x]++;
  		A[x].push(y);
	}
	for(i=1;i<=n;i++)
	{
		if(r[i]==0&&B.count(i)==0)
		{
			t.push(i); 
			B.insert(i);
			ans[i]=1;	
		}
	}
	while(!t.empty())
	{
		find(t.front());
		t.pop();
	}
	for(i=1;i<=n;i++)
	{
		if(c[i]==0)
		{
			sum+=ans[i]%80112002;
			sum%=80112002;
		}
	}
	cout<<sum%80112002;
    return 0;
 } 
