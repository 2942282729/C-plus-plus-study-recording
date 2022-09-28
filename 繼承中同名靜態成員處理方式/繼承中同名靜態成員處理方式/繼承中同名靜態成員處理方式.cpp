// 繼承中同名靜態成員處理方式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//子類出現和父類同名的靜態成員函數，也會隱藏父類中所有同名成員函數
//如果想訪問父類中被隱藏同名成員，也需加作用域
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base - func()調用" << endl;
	}
};
int Base::m_A = 100;           
class Son : public Base
{
public:
	static void func()
	{
		cout << "Son - func()調用" << endl;
	}
	static int m_A;
};
int Son::m_A = 200;
void test01()
{
	//1.通過對象來訪問：
	cout << "通過對象來訪問成員屬性" << endl;
	Son s;
	cout << "Son下的m_a =  " << s.m_A << endl;
	cout << "Base 下的m_a = " << s.Base::m_A << endl;
	// 2.通過類名訪問
	cout << "通過對象來訪問成員屬性" << endl;
	cout << "Son下的m_a =  " << Son::m_A << endl;
	//cout << "Base 下的m_a = " << Base::m_A << endl;     
	cout << "Base 下的m_a = " << Son::Base::m_A << endl;   
	//第一個雙冒號代表通過類名方式訪問 第二個::代表訪問父類作用域下
}
void test02() 
{
	//1.通過對象訪問
	cout << "通過對象來訪問成員函數" << endl;
	Son s;
	s.func();          //子類成員函數
	s.Base::func();  // 調用父類成員函數
	//通過類名方式訪問
	cout << "通過對象來訪問成員函數" << endl;
	Son::func();
	Base::func();
}

int main()
{
	test01();
	test02();
}