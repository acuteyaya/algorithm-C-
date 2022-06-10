#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int i,a[101],n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	 } 
	 sort(a+1,a+n+1);
	 cout<<a[1];
}
