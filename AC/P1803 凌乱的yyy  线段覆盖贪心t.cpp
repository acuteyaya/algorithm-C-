#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
using namespace std;
queue<int> s;
struct bisai{
	int start;
	int stop; 
}in[1000000];
bool cmp(bisai x,bisai y)
{
	return x.stop<y.stop;
}
int main()
{
	freopen("a.txt","r",stdin);
//	freopen("b.txt","w",stdout);
	int n,temp=0;
	register int i,j,k;
	cin>>n; 
	for(i=1;i<=n;i++)
  	{
  		scanf("%d %d",&in[i].start,&in[i].stop);
	}
	sort(in+1,in+n+1,cmp);
	int end=in[n].stop;
	for(i=1;i<=n;i++)
  	{
  		if(temp<=in[i].start)
		{
			temp=in[i].stop;
			s.push(1);
		}
	}
	cout<<s.size();
	return 0; 
 } 
 

