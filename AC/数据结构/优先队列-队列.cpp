#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>
#include<queue> 
using namespace std;
priority_queue<int> A;
priority_queue<int,vector<int>,greater<int> > C;
queue<int> B; 
int main()
{
	//freopen("a.txt","r",stdin);
	int i,n=10;
  	for(i=0;i<n;i++)
  	{
  		A.push(i);
  		B.push(i);
	}
	for(i=0;i<n;i++)
  	{
  		cout<<A.top()<<endl;
  		cout<<B.front()<<endl;
  		B.pop();
  		A.pop();
	}
    return 0;
 } 
