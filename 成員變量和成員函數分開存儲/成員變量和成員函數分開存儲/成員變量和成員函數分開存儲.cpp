// 成員變量和成員函數分開存儲.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;

class Person
{
	int m_a;					//非静态成员变量 ， 属于类的对象上
	static int m_b;			//静态成员变量 ，不属于类对象上
	void func() {}           // 非静态的成员函数 不属于类的对象上 
	static void func2() {}  // 非静态的成员函数 不属于类的对象上 
};
int Person :: m_b = 0;
void test01()
{
	Person p;
	cout << "size of p = " << sizeof(p) <<"字節" << endl;
	//空對象占用内存空間為1          
	//C++編譯器會給每個空對象也分配一個字節的内存空間 ， 是爲了區分空對象占内存的位置
	//每個空對象也占用一個獨一無二的内存地址
}
void test02()
{
	Person p;
	cout << "size of p = " << sizeof(p) << "字節" << endl;
	
}
int main()
{
	test01();            
	test02();
}
