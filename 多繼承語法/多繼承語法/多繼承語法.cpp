// 多繼承語法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//多繼承語法：
class Base1
{
public:
	Base1()
	{
		m_a = 100;
	}
	int m_a;
};
class Base2
{
public:
	Base2()
	{
		m_a = 200;
	}
	int m_a;
};
//語法  子類 ：繼承方式 父類1，繼承方式 父類2  ..........
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_c = 300;
		m_d = 400;
	}
	int m_c;
	int m_d;
};
void test01()
{
	Son s;
	cout << "sizeof Son = " << sizeof(s) << endl;	
	//儅父類中出現了重名的成員需要加上作用域
	cout <<"Base1的m_a = "<< s.Base1::m_a << endl;
	cout << "Base2的m_a = " << s.Base2::m_a << endl;
}
int main()
{
	test01();
}

