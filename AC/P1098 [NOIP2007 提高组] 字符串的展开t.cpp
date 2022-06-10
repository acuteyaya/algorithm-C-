#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	freopen("a.txt","r",stdin);
//	freopen("b.txt","w",stdout);
	int p1,p2,p3;
	register int i,j,k=0;
	cin>>p1>>p2>>p3;
	string x;
	cin>>x;
	while(1)
	{
		k=x.find("-",k);
		//cout<<k<<endl;
		if(k==x.npos) break;
		char l,r;
		l=x[k-1];
		r=x[k+1];
		//cout<<l<<" "<<r<<endl;
		int tag=1,numtag=0; 
		if(l<='9'&&l>='0')
		{
			if(r<='9'&&r>='0')
			{
				tag=0;
				numtag=1;
			}
		}
		if(r<='z'&&r>='a')
		{
			if(l<='z'&&l>='a')
			{
			    tag=0;
			} 
		}
		if(l>=r) 
		{
			k++;
			continue;
		}
		if(l+1==r) 
		{
			x.erase(k,1);
			k++;
			continue;
		}
		if(tag) 
		{
			k++;
			continue;
		}
		j=r-l;
		char ltemp=l;
		char rtemp=r;
		x.erase(k,1);
		if(p3==1)//Õý 
		{
			for(char p=l+1;p<=r-1;p++)
			{
				if(p1==1)
				{
						x.insert(k,p2,p);
						k+=p2;
				}
				else if(p1==2)
				{
					if(numtag)//Êý×Ö 
					{
						x.insert(k,p2,p);
						k+=p2;
					}
					else
					{
						char temp=p-32;
						x.insert(k,p2,temp);
						k+=p2;
					} 
				}
				else
				{
					x.insert(k,p2,'*');
					k+=p2;
				} 
				
			}
		}
		else//µ¹ 
		{
			for(char p=r-1;p>=l+1;p--)
			{
				if(p1==1)
				{
						x.insert(k,p2,p);
						k+=p2;
				}
				else if(p1==2)
				{
					if(numtag)//Êý×Ö 
					{
						x.insert(k,p2,p);
						k+=p2;
					}
					else
					{
						char temp=p-32;
						x.insert(k,p2,temp);
						k+=p2;
					} 
				}
				else
				{
					x.insert(k,p2,'*');
					k+=p2;
				} 
			}	
		} 
		k++;	
	}
	cout<<x;
	//cout<<x;
	return 0; 
 } 
 

