#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;
int map[100][100]; 
int ans[100][100]; 
int n,m,i,j,p;
int find(int x,int y,int z)
{
	int i,j;
	if(x<0||y<0||x>=n||y>=m||z<=map[x][y]) 
	{
		return 0; 
	} 
	if(ans[x][y]) return ans[x][y];
	ans[x][y]+=1+max(max(find(x+1,y,map[x][y]),find(x-1,y,map[x][y])),max(find(x,y+1,map[x][y]),find(x,y-1,map[x][y])));
	return ans[x][y];
}
int main()
{
	freopen("a.txt","r",stdin);
  	cin>>n>>m;
  	for(i=0;i<n;i++)
  	{
	  	for(j=0;j<m;j++)
	  	{
	  		cin>>map[i][j];
		}
	}	
		
	for(i=0;i<n;i++)
  	{
	  	for(j=0;j<m;j++)
	  	{
	  		find(i,j,999999); 
		}	
	}
	for(i=0;i<n;i++)
  	{
	  	for(j=0;j<m;j++)
	  	{
	  		if(ans[i][j]>p) p=ans[i][j];
	  		//cout<<ans[i][j]<<" ";
		}
	//	cout<<endl;
	}
	cout<<p;
    return 0;
 } 
