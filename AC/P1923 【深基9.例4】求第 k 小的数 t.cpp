#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int m,t,n[5000000],k[1000];
void sort(int left,int right)
{
	int i=left,j=right,temp=n[left],tag=1;
	while(i!=j)
	{
		while(n[j]>temp)
		{
			j--;
		}
	
		while(n[i]<temp)
		{
			i++;
		}
		if(i==j) 
		{
			if(i==t) cout<<n[i]; 
			else if(t<i) sort(left,i); 
			else sort(i+1,right); 
		}
		swap(n[j],n[i]);
	
	}
	
}
int main()
{
	freopen("a.txt","r",stdin);
	int i;
  	scanf("%d %d",&m,&t);
  	t+=1;
  	for(i=1;i<=m;i++)
  	{
  		scanf("%d",&n[i]);
	}
	sort(1,m);
    return 0;
 } 
