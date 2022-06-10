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
int main()
{
	freopen("a.txt","r",stdin);
	int n,m;
	int i,j,k,sum=0;
	int a[10001]; 
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{
  		cin>>a[i];
	}
	int tag;
	while(1)
	{
		tag=1;
		for(i=1;i<=n-1;i++)
	  	{
	  		if(a[i]>a[i+1])
	  		{
	  			tag=0;
	  			swap(a[i],a[i+1]);
	  			sum++;
			}
		
		}
		if(tag)break;
	}
	
	cout<<sum;
    return 0;
 } 
