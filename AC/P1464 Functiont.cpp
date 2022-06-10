#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int ans[500][500][500];
int w(long long a,long long b,long long c)
{
	if(ans[a][b][c]) return ans[a][b][c];
	if(a<=0||b<=0||c<=0) ans[a][b][c]=1;
	else
	{
		if(a>20||b>20||c>20) ans[a][b][c]=w(20,20,20);
		else
		{
			if(a<b&&b<c) ans[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
			else ans[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
		}
	}
	return ans[a][b][c];
} 
int main()
{
//	freopen("a.txt","r",stdin);
	long long a,b,c;
	while(1)
	{
		cin>>a>>b>>c;	
		if(a==-1&&b==-1&&c==-1)break; 
		if(a<=0||b<=0||c<=0) printf("w(%lld, %lld, %lld) = 1\n",a,b,c);
        else
        {

		if(a>20||b>20||c>20) printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(20,20,20));
		else printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
		}
	}
    return 0;
} 
