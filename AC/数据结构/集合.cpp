#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>
#include<queue> 
using namespace std;
set<int> A; 
/*

begin() 　　 返回set容器的第一个元素的地址

end() 　　　　 返回set容器的最后一个元素地址

clear() 　　 删除set容器中的所有的元素

empty() 　　　 判断set容器是否为空

max_size() 　 返回set容器可能包含的元素最大个数

size() 　　　　 返回当前set容器中的元素个数

1.count() :用来查找set中某个元素出现的次数。这个函数在set并不是很实用，因为一个键值在set只可能出现0或1次，这样就变成了判断某一键值是否在set出现过了。

2.find(): 用来查找set中某个元素出现的位置。如果找到，就返回这个元素的迭代器，如果这个元素不存在，则返回 s.end() 。 (最后一个元素的下一个位置，s为set的变量名)

*/
int main()
{
	//freopen("a.txt","r",stdin);
	int i,n=10;
  	for(i=0;i<n;i++)
  	{
  		A.insert(6);
	}
	A.insert(1);
	//cout<<A.count(6)<<endl; 
  	for(set<int>::iterator j=A.begin();j!=A.end();j++)
  	cout<<*j<<endl;
    return 0;
 } 
