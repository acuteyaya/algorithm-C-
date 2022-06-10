#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
char map[100][100];
int  tag[100][100];
char newmap[100][100];
char dt[]="yizhong";
int n;
int sum;
int ts=0;
void ya(int x,int y,int tag[],int fx=0,int k=0)
{
	if(x>=0&&y>=0&&x<n&&y<n) 
	{
		if(!fx)
		{
			if(map[x][y]==dt[k])
			{
				tag[2*k]=x;
				tag[2*k+1]=y;

				//printf("x:%d y:%d =%c \n",x,y,map[x][y]); 
				k++;
				ya(x+1,y,tag,1,k);
				ya(x+1,y+1,tag,2,k);
				ya(x+1,y-1,tag,3,k);
				ya(x-1,y,tag,4,k);
				ya(x-1,y+1,tag,5,k);
				ya(x-1,y-1,tag,6,k);
				ya(x,y+1,tag,7,k);
				ya(x,y-1,tag,8,k);
				k--;
			}
		}
		else
		{
			if(map[x][y]==dt[k])
			{ 
				tag[2*k]=x;
				tag[2*k+1]=y;
				if(dt[k]=='g')
				{
				//	cout<<"ts:"<<ts<<endl;//cout<<" "<<x<<" "<<y<<endl;
				//	ts++;
					int wz=0;
					for(int i=0;i<14;i+=2)
					{
						newmap[tag[i]][tag[i+1]]=dt[wz++];
					}
					return;
				}
				k++;
				if(fx==1) ya(x+1,y,tag,1,k);
				else if(fx==2) ya(x+1,y+1,tag,2,k);
				else if(fx==3) ya(x+1,y-1,tag,3,k);
				else if(fx==4) ya(x-1,y,tag,4,k);
				else if(fx==5) ya(x-1,y+1,tag,5,k);
				else if(fx==6) ya(x-1,y-1,tag,6,k);
				else if(fx==7) ya(x,y+1,tag,7,k);
				else if(fx==8) ya(x,y-1,tag,8,k);
				k--;
			}
		}
	}	
	return;
} 
void yafind()//ÕÒy 
{	
	int i,j;
	int tag[14]={0};
	for(i=0;i<n;i++)
  	{
  		for(j=0;j<n;j++)
  		{
  			if(map[i][j]=='y') ya(i,j,tag); 
		} 
	}
}
int main()
{
	freopen("a.txt","r",stdin);
//	freopen("b.txt","w",stdout);
	register int i,j;
	cin>>n; 
	for(i=0;i<n;i++)
  	{
  		for(j=0;j<n;j++)
  		{
  			cin>>map[i][j];
			newmap[i][j]='*'; 
		} 
	}
	yafind();
	for(i=0;i<n;i++)
  	{
  		for(j=0;j<n;j++)
  		{
  			printf("%c",newmap[i][j]); 
		} 
		cout<<endl;
	}
	return 0; 
 } 
 

