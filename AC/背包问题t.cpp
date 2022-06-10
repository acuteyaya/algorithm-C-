#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	freopen("a.txt","r",stdin);
    int T,M,v[101],p[101],i,a[10000]={0},b;
    cin>>T>>M;
    for(i=1;i<=M;i++) cin>>v[i]>>p[i];
    for(i=1;i<=M;i++)
    { 
        for(b=T;b>=v[i];b--)
        {
        	a[b]=max(a[b],a[b-v[i]]+p[i]);
		}
	}
    cout<<a[T];
    return 0;
}

