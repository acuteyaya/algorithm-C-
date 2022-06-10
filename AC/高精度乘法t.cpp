#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a1[100000]={0},b1[100000]={0},c1[100000]={0};
	string a,b,aa;
	long long p2=0,p1,pp,x,y,z,k,k1,k2,i,j,c[100000]={0};
	cin>>a>>b;
	x=a.length();
	y=b.length(); 
	for(i=0;i<x;i++) a1[i]=a[i];
	for(i=0;i<y;i++) b1[i]=b[i];
	k1=y-1;
	k2=0;
	if(x+y>18)
	{
	while(k1>=0)
	{
		p1=0;
	    k=k2;
	    	for(i=x-1;i>=0;i--)  
		{
            	 pp=p1+(a1[i]-'0')*(b1[k1]-'0');
            	 if(pp>=10)
            	 {
            	 	p1=pp/10;
            	 	c[k]=c[k]+(pp-pp/10*10);
				 }
                else
                {
                	c[k]=c[k]+pp;
                	p1=0;
				}
				k++;
				if(i==0&&pp>=10) c[k]=c[k]+p1; 
		}
	k2++;
	k1--;
	}
	int abc=0,abc1,abc2,ab1,ab2,ab3;
	for(i=x+y;i>=0;i--) 
	{
		if(c[i]!=0) 
		{
			abc=1;
			for(int abc2=0;abc2<=i;abc2++)
			{
			    if(abc2==i&&c[i]>=10) cout<<c[abc2]/10;
				if(c[abc2]>=10) 
				{	
				ab1=c[abc2]/10;
				c[abc2+1]=c[abc2+1]+ab1;
				c[abc2]=c[abc2]-ab1*10;
				}
				else c[abc2]=c[abc2];
			}
			for(int j=i;j>=0;j--) cout<<c[j];
			break;
		}
	}		
	if(abc==0) cout<<0;
}
else
{
	int pp1=1;
	pp=1;
	k=0;
	k1=0;
		for(i=x-1;i>=0;i--) 
		{
		    k=k+(a1[i]-'0')*pp;
			pp=pp*10;	
		}
	for(i=y-1;i>=0;i--)
	{
		    k1=k1+(b1[i]-'0')*pp1;
			pp1=pp1*10;	
    }
    cout<<k*k1;
}
	return 0; 
}
