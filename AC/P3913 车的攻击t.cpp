#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>
using namespace std;
long long sum; 
int main()
{
	freopen("a.txt","r",stdin);
	long long n,k,X=1,Y=1,tempx,tempy;
	long long i,j,x[100000],y[100000];
  	scanf("%lld%lld",&n,&k);
  	for(i=1;i<=k;i++) 
	{
	  	scanf("%lld%lld",&x[i],&y[i]);
	}
	sort(x+1,x+1+k);
	sort(y+1,y+1+k);
	tempx=x[1];
	tempy=y[1];
	for(i=2;i<=k;i++)
	{
		if(tempx!=x[i]) 
		{
			tempx=x[i];
			X++;
		}
		if(tempy!=y[i]) 
		{
			tempy=y[i];
			Y++;
		}
	}
	sum=n*n-(n-X)*(n-Y);
	printf("%lld",sum);
    return 0;
 } 
