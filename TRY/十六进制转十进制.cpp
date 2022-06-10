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
	//freopen("a.txt","r",stdin);
	int n,m;
	int i,j,k;
	int t1,t2,t3;
  	cin>>n;
  	int t;
  	int p[10000]={0},pt=0;
  	set<int> A; 
	if(n&1==1)//5
	{
		for(i=0;i<=9;i++)
		{
			t=n-i;
			for(j=0;j<=9;j++)
			{
				for(k=0;k<=9;k++)
				{
					if((j+k)*2==t)
					{
						int temp=j*10000+k*1000+i*100+k*10+j;
						A.insert(temp);
					}
				}
			}
		}
		pt=0;
		for(set<int>::iterator u=A.begin();u!=A.end();u++)
		{
			p[pt]=*u;
			pt++;
		}
		sort(p,p+pt);
		for(i=0;i<pt;i++)
		{
			printf("%05d\n",p[i]);
		
		}
	}
	else//6
	{
		t=n/2;
		for(i=0;i<=9;i++)
		{
			for(j=0;j<=9;j++)
			{
				for(k=0;k<=9;k++)
				{
					if(i+j+k==t)
					{
						int temp=i*100000+j*10000+k*1000+k*100+j*10+i;
						A.insert(temp);
					}
				}
			}
		}
		pt=0;
		for(set<int>::iterator u=A.begin();u!=A.end();u++)
		{
			p[pt]=*u;
			pt++;
		}
		sort(p,p+pt);
		for(i=0;i<pt;i++)
		{
			printf("%06d\n",p[i]);
		
		}
	}
	
    return 0;
 } 
