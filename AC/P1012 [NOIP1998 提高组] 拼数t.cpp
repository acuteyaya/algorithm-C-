#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string x,string y)
{
	return x+y > y+x;
}
int main()
{
	freopen("a.txt","r",stdin);
	int n;
  	int i,j; 
  	string x[21];
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{
  		cin>>x[i];
	}
	sort(x+1,x+1+n,cmp);
	for(i=1;i<=n;i++)
  	{
  		cout<<x[i];
	}
    return 0;
 } 
