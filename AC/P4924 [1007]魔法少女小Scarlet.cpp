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
struct ya{
	int xtemp;
	int ytemp;
}temp; 
int map[500][500],n,m;
void yuac(int x,int y,int r,int z)
{
	queue<int> A;
	int i,j,k,fx=0;
	int yat1,yat2,buc;
	if(z)//ÄæÊ±Õë 
	{
		for(j=1;j<=r;j++)
		{
			buc=2+2*(j-1);
			fx=0;
			while(fx!=4)
			{
				if(fx==0)
				{
					temp.xtemp=x-j;//r 
					temp.ytemp=y-j;
					for(i=1;i<=buc;i++)
					{
						A.push(map[temp.xtemp][temp.ytemp]);
						temp.xtemp++;
					} 
					fx++;	
				}
				else if(fx==1)
				{
					temp.xtemp=x+j;//r 
					temp.ytemp=y-j;
					for(i=1;i<=buc;i++)
					{
						A.push(map[temp.xtemp][temp.ytemp]);
						temp.ytemp++;
					} 
					fx++;	
				}
				else if(fx==2)
				{
					temp.xtemp=x+j;//r 
					temp.ytemp=y+j;
					for(i=1;i<=buc;i++)
					{
						A.push(map[temp.xtemp][temp.ytemp]);
						temp.xtemp--;
					} 
					fx++;	
				}
				else if(fx==3)
				{
					temp.xtemp=x-j;//r 
					temp.ytemp=y+j;
					for(i=1;i<=buc;i++)
					{
						A.push(map[temp.xtemp][temp.ytemp]);
						temp.ytemp--;
					} 
					fx++;	
				}
			}
			 /*
			queue<int> B=A;
			while(!B.empty())
			{
				cout<<"\n|"<<B.front()<<"|\n";
				B.pop();
			}
			*/
			fx=0;
			while(fx!=4)
			{
				if(fx==0)
				{
					temp.xtemp=x+j;//r 
					temp.ytemp=y-j;
					//temp.xtemp++;
					for(i=1;i<=buc;i++)
					{
						map[temp.xtemp][temp.ytemp]=A.front();
						A.pop();
						temp.ytemp++;
					} 
					fx++;	
				}
				else if(fx==1)
				{
					temp.xtemp=x+j;//r 
					temp.ytemp=y+j;
					//temp.ytemp++;
					for(i=1;i<=buc;i++)
					{
						map[temp.xtemp][temp.ytemp]=A.front();
						A.pop();
						temp.xtemp--;
					} 
					fx++;	
				}
				else if(fx==2)
				{
					temp.xtemp=x-j;//r 
					temp.ytemp=y+j;
			//		temp.xtemp--;
					for(i=1;i<=buc;i++)
					{
						map[temp.xtemp][temp.ytemp]=A.front();
						A.pop();
						temp.ytemp--;
					} 
					fx++;	
				}
				else if(fx==3)
				{
					temp.xtemp=x-j;//r 
					temp.ytemp=y-j;
					//temp.ytemp--;
					for(i=1;i<=buc;i++)
					{
						map[temp.xtemp][temp.ytemp]=A.front();
						A.pop();
						temp.xtemp++;
					} 
					fx++;	
				}
			}
		}	
	}
	else
	{
		for(j=1;j<=r;j++)
		{
			buc=2+2*(j-1);
			fx=0;
			while(fx!=4)
			{
				if(fx==0)
				{
					temp.xtemp=x-j;//r 
					temp.ytemp=y-j;
					for(i=1;i<=buc;i++)
					{
						A.push(map[temp.xtemp][temp.ytemp]);
						temp.xtemp++;
					} 
					fx++;	
				}
				else if(fx==1)
				{
					temp.xtemp=x+j;//r 
					temp.ytemp=y-j;
					for(i=1;i<=buc;i++)
					{
						A.push(map[temp.xtemp][temp.ytemp]);
						temp.ytemp++;
					} 
					fx++;	
				}
				else if(fx==2)
				{
					temp.xtemp=x+j;//r 
					temp.ytemp=y+j;
					for(i=1;i<=buc;i++)
					{
						A.push(map[temp.xtemp][temp.ytemp]);
						temp.xtemp--;
					} 
					fx++;	
				}
				else if(fx==3)
				{
					temp.xtemp=x-j;//r 
					temp.ytemp=y+j;
					for(i=1;i<=buc;i++)
					{
						A.push(map[temp.xtemp][temp.ytemp]);
						temp.ytemp--;
					} 
					fx++;	
				}
			}
			fx=0;
			while(fx!=4)
			{
				if(fx==0)
				{
					temp.xtemp=x-j;//r 
					temp.ytemp=y+j;
					for(i=1;i<=buc;i++)
					{
						map[temp.xtemp][temp.ytemp]=A.front();
						A.pop();
						temp.ytemp--;
					} 
					fx++;	
				}
				else if(fx==1)
				{
					temp.xtemp=x-j;//r 
					temp.ytemp=y-j;
			//		temp.xtemp++;
					for(i=1;i<=buc;i++)
					{
						map[temp.xtemp][temp.ytemp]=A.front();
						A.pop();
						temp.xtemp++;
					} 
					fx++;	
				}
				else if(fx==2)
				{
					temp.xtemp=x+j;//r 
					temp.ytemp=y-j;
				//	temp.ytemp++;
					for(i=1;i<=buc;i++)
					{
						map[temp.xtemp][temp.ytemp]=A.front();
						A.pop();
						temp.ytemp++;
					} 
					fx++;	
				}
				else if(fx==3)
				{
					temp.xtemp=x+j;//r 
					temp.ytemp=y+j;
				//	temp.xtemp--;
					for(i=1;i<=buc;i++)
					{
						map[temp.xtemp][temp.ytemp]=A.front();
						A.pop();
						temp.xtemp--;
					} 
					fx++;	
				}		
			}
		}
	}
}
int main()
{
	freopen("a.txt","r",stdin);
	cin>>n>>m;
	int i,j,k;
	j=0;
	k=0;
	for(i=1;i<=n*n;i++)
	{
		map[k][j]=i;
		j++;
		if(j==n) 
		{
			j=0;k++;
		}
		
	}
	int x,y,r,z;
	for(k=1;k<=m;k++)
	{
		//cin>>x>>y>>r>>z;
		scanf("%d%d%d%d",&x,&y,&r,&z);
		yuac(x-1,y-1,r,z);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
	return 0;
}


