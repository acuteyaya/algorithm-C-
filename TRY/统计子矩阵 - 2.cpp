#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<cmath>
using namespace std;
unsigned long long n,m,k,a[505][505],sum=0;
int i,j;
int find(int x,int y,int v,int fx)
{
	
	if(x>=n||y>=m||x<0||y<0) return 0;
	v+=a[x][y];
	int p,q;
	int temp=v;
	if(fx==0)
	{
		if(v<=k) sum++;
		else return 0; 
		find(x+1,y,v,1);
		find(x,y+1,v,2);
		find(x+1,y+1,v,3);
	}
	else if(fx==1)
	{		 
		for(p=y+1;p<m;p++)
		{
			if(p==x) continue; 
			for(q=0;q<=x;q++)
			{
				temp+=a[q][p];
			}
			if(temp<=k) 
			{
				sum++;
			}
			else break;
		}
		if(v<=k) sum++;
		else return 0; 
		find(x+1,y,v,1);
	}
	else if(fx==2)
	{
		for(p=x+1;p<n;p++)
		{
			if(p==y) continue; 
			for(q=0;q<=y;q++)
			{
				temp+=a[p][q];
			}
			if(temp<=k) 
			{
		    	sum++;
			} 
			else break;
		}
		if(v<=k) sum++;
		else return 0; 
		find(x,y+1,v,2);
	}
	else if(fx==3)
	{
		
		int xt=x,yt=y;
		while(xt>=0)
		{
			v+=a[xt][y];
			xt--;
		}
		while(yt>=0)
		{
			v+=a[x][yt];
			yt--;
		}
		if(v<=k) sum++;
		else return 0;
		find(x+1,y+1,v,3);
	}
	return 0; 
}
int main()
{
	//freopen("a.txt","r",stdin);
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			find(i,j,0,0);
		//	cout<<sum<<endl;
		}
	}
	cout<<sum;
	return 0;
} 
