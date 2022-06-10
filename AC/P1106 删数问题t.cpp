#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
string max;
string y,x;
int n,len,i,j,lenbj;
int bj(string x0,string y0,int l)
{
	int tag=0;
	for(i=0;i<l;i++)
	{
		if(x0[i]>y0[i])
		{
			return 0;//x>y
		}
		else
		{
			return 1;//y>x
		}
	}
	return 2;//y=x
}

int main()
{
	freopen("a.txt","r",stdin);
	
	cin>>y>>n;
	len=y.length();
	lenbj=0;
	i=0;
  	while(n>lenbj)
	{
		j=0;
		while(1)
		{
			if(y[0]=='0')
			{
				y.erase(0,1);
			//	const char *p1=y.c_str();
			}
			else break;
		}
			
		
		if(y[i]>y[i+1])
		{
			y.erase(i,1);
		//	const char *p=y.c_str();
			lenbj++;
			i=0;
			
			continue;
		}
		i++;
	}
	cout<<y<<endl;
    return 0;
 } 
