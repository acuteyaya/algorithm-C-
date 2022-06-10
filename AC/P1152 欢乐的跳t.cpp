#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<set>
using namespace std;

set<int> A; 
int main()
{
	freopen("a.txt","r",stdin);
//	freopen("b.txt","w",stdout);
	int n,m;
	register int i,j;
	int next;
	cin>>n; 
	cin>>m;
	next=m;
	for(i=1;i<n;i++)
  	{
  		cin>>m;
  		int temp=m-next;
  		next=m;
  		if(temp<0)
  		{
  			temp*=(-1);
		}
		//cout<<temp<<endl;
		if(temp>=1&&temp<=n-1)	
		{
			if(A.count(temp)==0) A.insert(temp);
			else 
			{
				cout<<"Not jolly";
				return 0;
			}	
		}
		else
		{
			cout<<"Not jolly";
			return 0;
		}
		
	}
	cout<<"Jolly";
			return 0;
 } 
 

