#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;
int n,v[21];
queue<int> A[21];
queue<int> T;
int m=0; 
void find(int i,set<int> B,queue<int> C,int sum=0)
{
	B.insert(i);
	C.push(i);
	sum+=v[i];
	queue<int> t=A[i];
	int tag=1;
	while(!t.empty())
	{
		if(B.count(t.front())==0)
		{
			tag=0;		
			find(t.front(),B,C,sum);
		} 
		t.pop();
	}
	if(tag)
	{
		
		if(sum>m)
		{
			m=sum;
			T=C;
		}
		while(!C.empty())
		{
			cout<<C.front()<<" ";
			C.pop();
		}
		cout<<endl;
	}
	
	return;
} 
int main()
{
	freopen("a.txt","r",stdin);
  	cin>>n;
  	int i,j;
  	for(i=1;i<=n;i++)
  	{
  		cin>>v[i];
	}
	int temp;
	for(i=1;i<n;i++)
  	{
  		for(j=i+1;j<=n;j++)
  		{
  			cin>>temp;
  			if(temp)
  			{
  				A[i].push(j);
  			//	A[j].push(i);
			}
		}
  		
	}
	set<int> B;
	queue<int> C;
	for(i=1;i<=n;i++)
  	{
  		find(i,B,C);
	}
//	for(i=1;i<=n;i++)
//  	{
//  		cout<<i<<": ";
//  		while(!A[i].empty())
//  		{
//  			cout<<A[i].front();
//			A[i].pop();
//		}
//  		cout<<endl;
//	}
	while(!T.empty())
	{
		cout<<T.front()<<" ";
		T.pop();
	}
	cout<<endl<<m;
    return 0;
 } 
