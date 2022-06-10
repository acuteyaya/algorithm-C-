#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{

	string x,y;
	cin>>x;
		for(int k=0;k<x.length();k++)
		{
			if(x[k]!='0') 
			{
				y+=x[k];
			}
		}
		
	cout<<y;
	
    return 0;
} 







