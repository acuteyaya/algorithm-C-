#include<iostream>
using namespace std;
int main()
{
	long int a,o=0,b,c,i,j,d[10];
	float x,y,z;
	cin>>x>>y>>z; 
	for(j=1;j<=999;j++)
	{
		
			    a=j;
				b=j/x*y;
				c=j/x*z;
			if((a/100)*((a/10)%10)*((a%100)%10)*(b/100)*((b/10)%10)*((b%100)%10)*(c/100)*((c/10)%10)*((c%100)%10)==362880&&(a/100+(a/10)%10+(a%100)%10+b/100+(b/10)%10+(b%100)%10+c/100+(c/10)%10+(c%100)%10==45))
			  {
			  	o=1;
			  	  cout<<a<<" "<<b<<" "<<c<<endl; 
			  } 
			
	}
	if(o!=1)    cout<<"No!!!";
			
	return 0;
} 