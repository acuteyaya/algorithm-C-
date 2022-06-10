#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	//freopen("a.txt","r",stdin);
	string n;
	int i,j,len;
  	cin>>n;
  	len=n.length();
  	int tag=1,k;
  	if(n[len-1]=='%') tag=3;
  	else
  	{
  		for(i=0;i<len;i++)
	  	{
	  		if(n[i]=='.'||n[i]=='/')
	  		{
	  			tag=2;
	  			k=i;
	  			break;
			}
		}
	}
	string y="";
	if(tag==1)
	{
		for(i=len-1;i>=0;i--)
		{
			if(n[i]!='0')
			{
				for(j=i;j>=0;j--)
				{
					y+=n[j];
				}
				cout<<y;
				return 0;
			}
		}
		cout<<0;
		return 0;
	}
  	else if(tag==2)
  	{
  		for(i=k-1;i>=0;i--)
		{
			if(n[i]!='0')
			{
				for(j=i;j>=0;j--)
				{
					y+=n[j];
				}
				goto wz;
			}
		}
		y+="0";
		wz:
		y+=n[k];
		int k1=0;
		for(i=len-1;i>=k+1;i--)
		{
			if(n[i]!='0') 
			{
				goto wz1;
			}
			k1++;
		}
		y+="0";
		cout<<y;
		return 0;
		wz1:
		len-=k1;
		for(i=k+1;i<=len-1;i++)
		{
			if(n[i]!='0')
			{
				for(j=len-1;j>=i;j--)
				{
					y+=n[j];
				}
				cout<<y;
				return 0;
			}
		}
		
	}
	else if(tag==3)
  	{
  		for(i=len-2;i>=0;i--)
		{
			if(n[i]!='0')
			{
				for(j=i;j>=0;j--)
				{
					y+=n[j];
				}
				y+="%";
				cout<<y;
				return 0;
			}
		}
		y+="0%";
		cout<<y;
		return 0;
	}
    return 0;
 } 
