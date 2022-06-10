#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	freopen("a.txt","r",stdin);

	int i,j,k;
	int bs[100000]={0},t=0;
	char temp;
	int w=0,l=0,c=0;
	while(1)
	{
		cin>>temp;
		if(temp=='E') break;
		else if(temp=='W') bs[t]=1;
		else if(temp=='E') bs[t]=0;
		t++;
	}
	for(i=0;i<t;i++) //i=t-1
	{
		if(w>=11||l>=11)
		{
			if(w-l>=2||l-w>=2)
			{
				cout<<w<<":"<<l<<endl;
				c=0;
				w=0;
			}
		}
		w+=bs[i];	
		c++;
		l=c-w;
	}
	cout<<w<<":"<<l<<endl;
	if(w+l==11) cout<<"0:0"<<endl;
	cout<<endl;
	w=0;
	c=0;
	l=0;
	for(i=0;i<t;i++) 
	{	
		if(w>=21||l>=21)
		{
			if(w-l>=2||l-w>=2)
			{
				cout<<w<<":"<<l<<endl;
				c=0;
				w=0;
			}
		}
		w+=bs[i];
		c++;
		l=c-w;
	}
	cout<<w<<":"<<l<<endl;
	if(w+l==21) 
	cout<<"0:0";
    return 0;
} 
