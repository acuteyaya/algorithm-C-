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

begin() ���� ����set�����ĵ�һ��Ԫ�صĵ�ַ

end() �������� ����set���������һ��Ԫ�ص�ַ

clear() ���� ɾ��set�����е����е�Ԫ��

empty() ������ �ж�set�����Ƿ�Ϊ��

max_size() �� ����set�������ܰ�����Ԫ��������

size() �������� ���ص�ǰset�����е�Ԫ�ظ���

1.count() :��������set��ĳ��Ԫ�س��ֵĴ��������������set�����Ǻ�ʵ�ã���Ϊһ����ֵ��setֻ���ܳ���0��1�Σ������ͱ�����ж�ĳһ��ֵ�Ƿ���set���ֹ��ˡ�

2.find(): ��������set��ĳ��Ԫ�س��ֵ�λ�á�����ҵ����ͷ������Ԫ�صĵ�������������Ԫ�ز����ڣ��򷵻� s.end() �� (���һ��Ԫ�ص���һ��λ�ã�sΪset�ı�����)

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
