// 递增运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//递增运算符重载
class MyInteger
{
public:
	MyInteger()
	{
		m_num =0;
	}	
	//重载前置++运算符
	MyInteger& operator++()    //返回引用的目的是对同一个对象进行返回
	{
		//先++
		m_num++;
		//后返回
		return *this;
	}
	//重载后置++运算符
	MyInteger operator++(int)     //int 代表占位参数 ，可以以哦那个来区分前置和后置递增
	{
		//先记录一下当时的结果
		MyInteger temp = *this;
		//后递增
		m_num++;
		//最后将记录的结果返回
		return temp;
	}
private:
	int m_num;
	friend ostream& operator<<(ostream& cout, MyInteger myint);

};
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test01();
	test02();
}

