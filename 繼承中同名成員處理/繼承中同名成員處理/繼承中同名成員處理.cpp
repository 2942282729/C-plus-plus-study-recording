// 繼承中同名成員處理.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//子類對象可以直接訪問到子類中的成員
//子類對象加作用域可以訪問到父類中的成員
//如果子類中出現和父類重名的成員函數，子類的同名成員函數會隱藏掉父類中所有同名成員函數
//如果想訪問到父類中被隱藏的同名成員函數，需要加作用域
class Base
{
public:
	int m_A;
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base - func()調用" << endl;
	}
};
class Son: public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son - func()調用" << endl;
	}
	int m_A;
};
void test01()
{
	Son s;
	cout << "Son下的m_a =  " << s.m_A << endl;
	cout << "Base 下的m_a = " << s.Base::m_A  << endl;
}
void test02()
{
	Son s;
	s.func();          //子類成員函數
	s.Base::func();  // 調用父類成員函數
}

int main()
{
	test01();
	test02();
}
