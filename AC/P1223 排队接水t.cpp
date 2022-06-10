#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
struct people{
	int time;
	int num;
}p[1001];
bool cmd(people x,people y)
{
	return x.time>=y.time;
}
int main()
{
	freopen("P1223_1.in","r",stdin);
	int n;
	register int i,j;
	
	double mean=0;
	cin>>n; 
  	for(i=1;i<=n;i++)
  	{
  		cin>>p[i].time;
  		p[i].num=i;
	}	
	sort(p+1,p+n+1,cmd);
	for(i=n;i>=1;i--)
  	{
  		cout<<p[i].num<<" ";
  		mean+=p[i].time*(i-1);
	}
	mean/=n;
	
	printf("\n%.2lf\n",mean);
	return 0;
 } 
