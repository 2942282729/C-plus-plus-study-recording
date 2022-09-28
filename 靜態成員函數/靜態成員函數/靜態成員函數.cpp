// 靜態成員函數.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量

class Person
{
public:
	static void func()
	{
		cout << "static void func()调用" << endl;
		m_a = 100 ;
		//m_b = 200;         // 报错 因为静态成员函数不能够访问非静态成员变量 , 无法区分m_b是谁的
	}

	static int m_a; //静态成员变量
	int m_b;
private:              // 静态成员函数也是有访问权限的
	static int func2()
	{
	cout << "static void func2()调用" << endl;
	}
};
int Person::m_a = 0;
int main()
{
	//通过对象访问
	Person p;
	p.func();
	//通过作用域访问
	Person::func();
}
