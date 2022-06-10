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
	int i,j,k;
	int a[301];
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{
  		cin>>a[i];
	}
	sort(a+1,a+1+n);
	// an a1 an-1 a2
	long long l=1,r=n,tag=1,temp=0,sum=0;
	while(l!=r)
	{
		if(tag)
		{
			sum+=pow(temp-a[r],2);
			temp=a[r];
			r--;
			tag=0;
		}
		else
		{
			sum+=pow(temp-a[l],2);
			temp=a[l];
			l++;
			tag=1;
		}
	}
	sum+=pow(temp-a[r],2);
	cout<<sum;
    return 0;
 } 
