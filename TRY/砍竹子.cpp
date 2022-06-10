#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<set>
#include<cmath>
using namespace std;
unsigned long long n,a[200000],sum=0;
int i,j,k;
int main()
{
	freopen("a.txt","r",stdin);
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	k=0;
	int t=a[0];
	while(t!=1)
	{
		t=sqrt(t/2+1);
		k++;
	}
	sum+=k;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1]) 
		{
			k=0;
			while(a[i]!=1)
			{
				a[i]=sqrt(a[i]/2+1);
				k++;
			}
			sum+=k;
		}
	}
	
	cout<<sum;
	return 0;
} 
