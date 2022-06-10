#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
struct ya{
	string x;
	int y;
	int m;
	int d;
	int num;
}A[101]; 
bool cmp(ya x,ya y)
{
	if(x.y==y.y)
	{
		if(x.m==y.m)
		{
			if(x.d==y.d)
			{
				return x.num < y.num;
			}
			return x.d < y.d;
		}
		return x.m < y.m;
	}
	return x.y < y.y;
}
int main()
{
	freopen("a.txt","r",stdin);
	int n,i;
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{
  		cin>>A[i].x>>A[i].y>>A[i].m>>A[i].d;
  		A[i].num=i;
	  }
	  
	sort(A+1,A+1+n,cmp);
	for(i=1;i<=n;i++)cout<<A[i].x<<endl;
    return 0;
 } 
