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
	freopen("a.txt","r",stdin);
	
	int n,m;
	int i,j,k,l;
	string x; 
  	cin>>n;
  	for(i=1;i<=n;i++)
  	{
  		cin>>x;
  		queue<int> A;
  		for(j=x.length()-1;j>=0;j--)
  		{
  			int t[4]={0};
  			int t1=1,t2,T;
  			if(x[j]>='0'&&x[j]<='9')
  			{
  				T=x[j]-'0';
  			}
  			else
  			{
  				T=x[j]-55;
  			}
  			k=0;
  			while(t1)
  			{
  				t1=T/2;
  				t[k]=T%2;
  				T=t1;
  				k++;
  			} 
  		//	cout<<t[3]<<t[2]<<t[1]<<t[0]<<endl;
  			A.push(t[0]);
  			A.push(t[1]);
  			A.push(t[2]);
  			A.push(t[3]);
  		}  
  		queue<int> B;
  		int t1,t2,t3;
  		while(1)
  		{	
  			t1=-1,t2=-1,t3=-1;
  			if(!A.empty())
  			{
  				t1=A.front();
				A.pop();
  			}
			if(!A.empty())
  			{
				t2=A.front();
				A.pop();
			}
			if(!A.empty())
  			{
				t3=A.front();
				A.pop();
			}
			if(t1>=0&&t2>=0&&t3>=0)
			{
				int temp=t1+t2*2+t3*4;
				B.push(temp);
			}
			if(t1==-1||t2==-1||t3==-1)
			{
				break;
			}
  		}
  	//	cout<<endl<<t1<<t2<<t3<<endl;
  		if(t1==-1&&t2==-1&&t3==-1)
  		{
  			goto wz;	
		} 
		else if(t2==-1&&t3==-1)
		{
			int temp=t1;
			B.push(temp);
		} 
		else if(t3==-1)
		{
			int temp=t1+t2*2;
			B.push(temp);
		} 
		wz:
			int temps[1000000]={0};
			k=0;
			while(!B.empty())
			{
				temps[k]=B.front();
				k++;
				B.pop();
			}
			for(j=k-1;j>=0;j--)
			{
				if(temps[j]==0) continue;
				else{
					for(l=j;l>=0;l--)
					{
						cout<<temps[l];
					}
					break;
				}
			}
  		cout<<endl;
  	
	}
    return 0;
 } 
