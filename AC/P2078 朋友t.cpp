#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int ansa[100000],ansb[100000];
int x11[100000],y11[100000],x22[100000],y22[100000];
int ya1(int k)
{
	if(ansa[k]==k)return k;
	else
    {
		return ansa[k]=ya1(ansa[k]);
    }
}
int ya2(int k)
{
	if(ansb[k]==k)return k;
	else
    {
		return ansb[k]=ya2(ansb[k]);
    }
}
int main()
{
	set<int> A;
	set<int> B;
	freopen("a.txt","r",stdin);
	int n,m,p,q;
	int i,j;
	int x,y;
  	cin>>n>>m>>p>>q;
	ansa[1]=1;
	ansb[1]=1;
	A.insert(1);
	B.insert(1);
	int tag1=0,tag2=0;
  	for(i=1;i<=p;i++)
  	{
  		cin>>x>>y;
  		if(x>0) tag1=1;
  		else 
	  	{
		  	x*=-1;
  			y*=-1;
	  		tag1=0;
	  	}
	  	if(!ansa[x]) ansa[x]=x;
	  	if(!ansa[y]) ansa[y]=y;
  		x11[i]=x;
  		y11[i]=y;
  		A.insert(x);
  		A.insert(y);
	}
	for(i=1;i<=p;i++)
  	{
		if(ya1(x11[i])!=ya1(y11[i]))
  		{
  			ansa[ya1(y11[i])]=ya1(x11[i]);
  		}
    }
	for(i=1;i<=q;i++)
  	{
  		cin>>x>>y;
  		if(x>0) tag2=1;
  		else 
	  	{
		  	x*=-1;
  			y*=-1;
	  		tag2=0;
	  	}
		if(!ansb[x]) ansb[x]=x;
	  	if(!ansb[y]) ansb[y]=y;
	  	x22[i]=x;
  		y22[i]=y;
  		B.insert(x);
  		B.insert(y);
	}
	for(i=1;i<=q;i++)
  	{
		if(ya2(x22[i])!=ya2(y22[i]))
  		{
  			ansb[ya2(y22[i])]=ya2(x22[i]);
  		}
    }
	int p1=0,p2=0;
	if(tag1==tag2) 
	{
		cout<<0;
		return 0;
	} 
	for(set<int>::iterator u=A.begin();u!=A.end();u++)
	{
  		if(ya1(1)==ya1(*u)) p1++;	
	}
	for(set<int>::iterator u=B.begin();u!=B.end();u++)
  	{
  		if(ya2(1)==ya2(*u)) p2++;
	}
	cout<<p1<<" "<<p2<<endl;
	cout<<min(p1,p2);
    return 0;
} 
