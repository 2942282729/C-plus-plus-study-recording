// 左移运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//左移运算符重载配合友元可以实现输出自定义数据类型

class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
	public:
		Person(int a, int b) :m_a(a), m_b(b)
		{
		}
private:
	int m_a;
	int m_b;
	//通常不会利用成员函数重载左移运算符，因为无法实现成员函数在左侧
};
//只能利用全局函数实现左移运算符的重载
ostream & operator<<(ostream&cout, Person &p)     //简化成 cout<<p
{
	cout << "m_a = " << p.m_a << "\tm_b = " << p.m_b;
	return cout;

}
void test01()
{
	Person p(10, 10);
	//cout << p.m_a << endl;
	//cout << p.m_b << endl;
	cout << p << endl<<"hello world";	
}

int main()
{
	test01();
}

