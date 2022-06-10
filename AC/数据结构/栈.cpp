#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>
#include<queue> 
#include<stack> 
using namespace std;
stack<int> A; 
int main()
{
	//freopen("a.txt","r",stdin);
	int i,n=10;
  	for(i=0;i<n;i++)
  	{
  		A.push(i);
  		
	}
  	for(i=0;i<n;i++)
  	{
  		cout<<A.top();
  		A.pop();  		
	}
    return 0;
 } 
