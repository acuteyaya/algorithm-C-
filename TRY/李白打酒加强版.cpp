#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<cmath>
using namespace std;
int n,m;
long long find(int x,int y,int v)
{
	if(x==n&&y==m-1&&v==1) return 1;
	if(x>n||y>m-1) return 0;
	return find(x+1,y,v*2)%1000000007+find(x,y+1,v-1)%1000000007;
}
int main()
{
	cin>>n>>m;
	cout<<find(0,0,2)%1000000007; 
	return 0;
} 
