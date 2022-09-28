// 初始化列表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
// 初始化列表，用來初始化對象的屬性
class Person
{
public:
	int m_a;
	int m_b;
	int m_c; 
public:
	Person(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}
	Person(int a,int b, int c ) :m_a(a), m_b(b), m_c(c)
	{
	}
};
void test(int a, int b, int c)
{
	//Person p(10, 20, 30);
	Person p(30, 20, 10);
	cout << "m_a = " << p.m_a << endl;
	cout << "m_b = " << p.m_b << endl;
	cout << "m_c = " << p.m_c << endl;
};
int main()
{	
	test(10,20,30);
}

