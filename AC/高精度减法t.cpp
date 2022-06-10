#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
typedef string _;
class gj
{
	
	public:
		gj():oo(){}
		gj(_ x):oo(x){}
	    void in(_ x)
	    {
	    	oo=x;
		}
		void out()
	    {
	    	cout<<oo;
		}
		friend gj operator + (gj a,gj b)
		{
			
			char a1[100000],a2[100000],su[100000];
			int b1[100000],b2[100000],b3[100000];
			memset(b1,0,sizeof(b1));
			memset(b2,0,sizeof(b2));
			memset(b3,0,sizeof(b3));
			int c1=a.oo.length();
			int c2=b.oo.length();
			int j=0;
			for(int i=c1-1;i>=0;i--)
			{
				a1[i]=a.oo[i];
				b1[j]=a1[i]-'0';
				j++;
			}
			j=0;
			for(int i=c2-1;i>=0;i--)
			{
				a2[i]=b.oo[i];
				b2[j]=a2[i]-'0';
				j++;
			}
			j=0;
			int pd=0;
			while(j<=max(c1,c2))
			{
				b3[j]=b1[j]+b2[j]+pd;
				if(b3[j]>=10)
				{
					b3[j]=b3[j]%10;
					pd=1;
				} 
				else pd=0;
			//	cout<<b3[j];
				j++;
			}
			j--;
			if(b3[j]==0) j--;
			int k=0,count=j; 
			for(int i=j;i>=0;i--)
			{
				su[k]=b3[i]+'0';
				k++;
			}
			string su1(su);
			return gj(su1);
		    
		} 
			friend gj operator - (gj a,gj b)
		{
			int fh=0;
			char a1[100000],a2[100000],su[100000];
			int b1[100000],b2[100000],b3[100000];
			memset(b1,0,sizeof(b1));
			memset(b2,0,sizeof(b2));
			memset(b3,0,sizeof(b3));
			int c1=a.oo.length();
			int c2=b.oo.length();
			if(c1>c2) fh=0;
			if(c1<c2) fh=1;
			int j=0;
			for(int i=c1-1;i>=0;i--)
			{
				a1[i]=a.oo[i];
				b1[j]=a1[i]-'0';
				j++;
			}
			j=0;
			for(int i=c2-1;i>=0;i--)
			{
				a2[i]=b.oo[i];
				b2[j]=a2[i]-'0';
				j++;
			}
			j--;
			if(c1==c2) 
			{
				if(a.oo==b.oo) 
				{
					string yaa="0";
					return gj(yaa);
			    }
				while(b1[j]==b2[j])
				{
				    j--; 
		     	}
		     	if(b1[j]>b2[j]) fh=0;
		     	else fh=1;
			}
			j=0;
			if(fh==0) 
			{
				int pd=0;
				while(j<=max(c1,c2))
				{
					b3[j]=b1[j]-b2[j]+pd;
					if(b3[j]<0)
					{
						b3[j]=b3[j]+10;
						pd=-1;
					} 
					else pd=0;
					j++;
				}
				j--;
				while(b3[j]==0) j--;
				int k=0,count=j; 
				for(int i=j;i>=0;i--)
				{
					su[k]=b3[i]+'0';
					k++;
				}
				string su1(su);
				return gj(su1);
			}
			else
			{
				int pd=0;
				while(j<=max(c1,c2))
				{
					b3[j]=b2[j]-b1[j]+pd;
					if(b3[j]<0)
					{
						b3[j]=b3[j]+10;
						pd=-1;
					} 
					else pd=0;
					j++;
				}
				j--;
				while(b3[j]==0) j--;
				int k=0,count=j; 
				for(int i=j;i>=0;i--)
				{
					su[k]=b3[i]+'0';
					k++;
				}
				
				string fh1="-"; 
				string su1(fh1+su);
				return gj(su1);
			}
		} 
	private:
		_ oo;
			
}; 
int main()
{

	string a,b;
	cin>>a>>b;
	gj w1,w2,sum;
	w1.in(a);
	w2.in(b);
	sum=w1-w2;
	sum.out();
	return 0;
 } 
