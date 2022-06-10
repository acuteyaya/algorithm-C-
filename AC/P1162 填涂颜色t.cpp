#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int map[32][32];
int newmap[32][32]; 
int n;
void find(int x,int y)
{
	if(x<0||y<0||x>=n+2||y>=n+2) return;
	if(map[x][y]==0)
	{
		map[x][y]=1;
		find(x+1,y);
		find(x,y+1);
		find(x-1,y);
		find(x,y-1);
	}
 	return;
}
int main()
{
	freopen("a.txt","r",stdin);
	int i,j; 
  	cin>>n;
  	for(i=1;i<n+1;i++)
  	{
  		for(j=1;j<n+1;j++)
  		{
  			cin>>map[i][j];	
  			newmap[i][j]=map[i][j];
		}
	}
	
	find(0,0);
	for(i=1;i<n+1;i++)
  	{
  		for(j=1;j<n+1;j++)
  		{
  			if(map[i][j])
  			cout<<newmap[i][j]<<" ";
  			else
  			cout<<2<<" ";
		}
		cout<<endl;
	}
    return 0;
 } 
