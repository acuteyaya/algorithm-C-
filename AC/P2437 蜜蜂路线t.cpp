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

#define xs 2 
string yasum(string x,string y)
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
string yasub(string x,string y)
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
		xymax=ylen;
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
static string yamul(string x,string y)
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
string yadiv(string x,string y,string endsq0="0",string endsq1="0",int Tag=1)
{
	long long futag=0;
	if(y[0]=='0') return"error";
	if(x[0]=='0') return "0";
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
	if(xlen>ylen)
	{
		xymax=xlen;
		xymin=ylen;
	}
	else if(xlen<ylen)
	{
		xymax=ylen;
		xymin=xlen;
		tag=1;
	}
	else
	{
		const char *tsx0=x.c_str();
		const char *tsy0=y.c_str();
		if(!strcmp(tsx0,tsy0)) return "1";
		while(k<=xlen)
		{
			if(x[k]>y[k])
			{
				goto start;
			}
			else if(x[k]<y[k])
			{
				tag=1;
				goto start;
			}
			k++;
		}		
	}
	start:
	long long o,addtag=0;
	long long sq=0;
	string ys,hx=x,hy=y,hy1="";
	k=0;
	//cout<<"x:"<<x<<" y:"<<y<<endl;
	if(tag)//0.00 
	{
		if(Tag)
		{
			for(i=1;i<=xs;i++) hx=yamul("10",hx);
		//	cout<<hx<<" "<<y<<endl;
			endsq1=yadiv(hx,y,endsq0,endsq1,0);
			return endsq0+"."+endsq1;
			//return endsq1;
		}
		else
		{
			return endsq1;
		}
		
	}
	else
	{		
		long long o,addtag=0;
		long long sq=0;
		if(x[k]<=y[k])
		{
			addtag=1;
		}
		o=xlen-ylen;
		if(addtag) o-=1;
		for(i=0;i<o;i++)
		{
			y+="0";
		}  
		//cout<<"y:"<<y<<endl;
		while(x[0]!='-'&&x[0]!='0')
		{	
			string xtemp=yasub(x,y);
			x=xtemp;
			sq++;
		}
		string wz="0";
		if(x[0]=='0') wz[0]=sq+'0';
		else wz[0]=(sq-1)+'0';
		for(i=1;i<=o;i++)
		{		
			wz=yamul("10",wz);	
		}	
		//cout<<"wz:"<<wz<<endl;  //商
		//cout<<"hx:"<<hx<<endl;	//被除数 
		//cout<<"hy:"<<hy<<endl;	//除数		
		string re=yamul(wz,hy);
		re=yasub(hx,re);
		const char *p = re.c_str();
		if(Tag)
		{
			if(re=="0") 
			{		
				endsq0=yasum(endsq0,wz);
				return endsq0;
			}
			else
			{		
				endsq0=yasum(endsq0,wz);
				endsq0=yadiv(re,hy,endsq0);
			} 
			return endsq0;
		}
		else
		{
			//cout<<endsq0<<" "<<endsq1<<endl;
			//cout<<"ys:"<<re<<endl;	//除数	
			if(re=="0") 
			{		
				endsq1=yasum(endsq1,wz);
				return endsq1;
			}
			else
			{		
				endsq1=yasum(endsq1,wz);
				endsq1=yadiv(re,hy,endsq0,endsq1,0);
			} 
			return endsq1;
		}				
	}
	
}

int main()
{
	string ans[1001];
	int i,j,k,n,m;
  	cin>>n>>m;
  	ans[m-1]="1";
  	ans[m-2]="2";
  	for(i=m-3;i>=n;i--)
  	{
  		ans[i]=yasum(ans[i+1],ans[i+2]);
	}
  	cout<<ans[n];
    return 0;
 } 
