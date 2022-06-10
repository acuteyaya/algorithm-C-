#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int ans[1000];
	int i,k=1,n;
	cin>>n;
	ans[0]=n;
	while(n!=1)
	{
		if(n%2==0) n/=2;
		else  n=n*3+1;
		ans[k]=n;
		k++;
	}
	for(i=0;i<=k-1;i++) printf("%d ",ans[i]);
	printf("\n");
	for(i=k-1;i>=0;i--) printf("%d ",ans[i]);
	return 0; 
 } 
 

