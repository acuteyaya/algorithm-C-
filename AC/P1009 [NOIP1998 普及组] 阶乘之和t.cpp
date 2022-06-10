#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
class yagj
{
	public:
		string x;
		string y;
		string yasum();
		string yasub();
		string yamul();
		string yadiv();
}; 
string yagj::yasum()
{
	long long i,k=0;
	long long xlen=x.length()-1;
	long long ylen=y.length()-1;
	long long xymax,xymin;
	long long temp,ne=0,tag;
	string sum="";
	if(xlen>=ylen)
	{
		xymax=xlen;
		xymin=ylen;
		tag=1;
	}
	else
	{
		xymax=ylen;
		xymin=xlen;
		tag=2;
	}
	char X,Y;
	while(k<=xymax)
	{
		if(tag==1&&k>xymin)
		{
			X=x[xlen];
			Y='0';
		}
		else if(tag==2&&k>xymin)
		{
			Y=y[ylen];
			X='0';
		}
		else
		{
			X=x[xlen];
			Y=y[ylen];
		}
		temp=(X+Y-'`')+ne;
		if(temp>=10)
		{
			ne=1;
			temp-=10;
		} 
		else ne=0;
		sum+=temp+'0';
		k++;
		xlen--;
		ylen--;
	} 
	if(ne) sum+='1'; 
	string result="";
	for(i=sum.length()-1;i>=0;i--) result+=sum[i];
	return result;	
}
string yagj::yasub()
{
	long long i,k=0;
	long long xlen=x.length()-1;
	long long ylen=y.length()-1;
	long long xymax,xymin;
	long long temp,ne=0,tag;
	string sum="";
	if(xlen>ylen)
	{
		xymax=xlen;
		xymin=ylen;
		tag=1;	
	}
	else if(xlen<ylen)
	{
		xymax=ylen;
		xymin=xlen;
		tag=2;
	}
	else
	{
		while(k<=xlen)
		{
			if(x[k]>y[k])
			{
				tag=1;
				goto start;
			}
			else if(x[k]<y[k])
			{
				tag=2;
				goto start;
			}
			k++;
		}
		return "0";	
	}
	start:
	if(tag==2)
	{
		string z=x;
		swap(xlen,ylen);
		x=y;
		y=z;
	}
	char X,Y;
	k=0;
	while(k<=xymax)
	{
		if(k>xymin)
		{
			X=x[xlen];
			Y='0';
		}
		else
		{
			X=x[xlen];
			Y=y[ylen];
		}
		temp=X-Y-ne;
		if(temp<0)
		{
			temp=10+X-Y-ne;
			ne=1;
		} 
		else ne=0;
		//cout<<X<<" "<<Y<<"  k:"<<k<<endl;
		sum+=temp+'0';
		k++;
		xlen--;
		ylen--;
	} 
	string result="",RESULT="";
	if(tag==2) result+="-";
	for(i=sum.length()-1;i>=0;i--)
	{
		RESULT+=sum[i];
	} 
	for(i=0;i<sum.length();i++)
	{
		if(RESULT[i]!='0')
		{
			for(int j=i;j<sum.length();j++)	result+=RESULT[j];
			break;	
		}
	
	} 
	return result;	
}
string yagj::yamul()
{
	long long futag=0;
	if(x[0]=='0'||y[0]=='0') return "0";
	if(x[0]=='-'&&y[0]=='-') 
	{
		x.erase(0,1);
		y.erase(0,1);
	}
	else if(x[0]=='-') 
	{
		futag=1;
		x.erase(0,1);
	}
	else if(y[0]=='-') 
	{
		futag=1;
		y.erase(0,1);
	}
	long long i,k=0;
	long long xlen=x.length()-1;
	long long ylen=y.length()-1;
	long long xymax,xymin,len,lentemp;
	long long temp,ne=0,tag=0;
	string mul="";
	if(xlen>=ylen)
	{
		xymax=xlen;
		xymin=ylen;
	}
	else
	{
		xymax=ylen;
		xymin=xlen;
		tag=1;
	}
	if(tag)
	{
		string z=x;
		swap(xlen,ylen);
		x=y;
		y=z;
	}
	char X,Y;
	long long lrtag=0,lr;
	while(ylen>=0)
	{
		len=xlen;	
		lr=lrtag;
		k=0;
		while(k<=xlen)
		{
			X=x[len];
			Y=y[ylen];
			while(mul.length()<=lr) mul+="0";
			temp=(X-'0')*(Y-'0')+ne+mul[lr]-'0';
			//cout<<X<<" "<<Y<<" "<<temp<<endl;
			if(temp>=10)
			{
				ne=temp/10;
				temp%=10;
			} 
			else ne=0;
			mul[lr]=+temp+'0';
			lr++;
			k++;
			len--;
		}
		if(ne) 
		{
			mul+=ne+'0';
			ne=0;
		}
		ylen--;
		lrtag++;
	}
	string result="";
	if(futag) result+="-";
	for(i=mul.length()-1;i>=0;i--) result+=mul[i];
	return result;
}
string inttostring(int k)
{
	string r="",s="";
	int l=0,i;
	while(k>=1)
	{
		l++;
		s+=k%10+'0';
		k/=10;
	}
	for(i=l-1;i>=0;i--) r+=s[i]; 
	return r;
}
int main()
{
//	freopen("P1303_4.in","r",stdin);
//	freopen("b.txt","w",stdout);
	yagj ya,ya1;
	int i,j,n;
	cin>>n;
	ya1.x="0";
	for(i=1;i<=n;i++)
	{
		ya.y="1";
		for(j=i;j>=2;j--)
		{
			ya.x=inttostring(j);
			ya.y=ya.yamul();	
		}
		ya1.y=ya.y;
		ya1.x=ya1.yasum();
	}

	cout<<ya1.x;
	return 0; 
 } 
 

