// 繼承方式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//繼承方式
//公共繼承
class Base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son1 :public Base1
{
	void func()
	{
		m_a = 10;			//父類中公有權限内容 到子類中依然是公有權限
		m_b = 10;         //父類中保護權限内容 到子類中依然是保護權限
		//m_c = 10;        // 父類中的私有成員 不可以訪問
	}
};
void test01()
{
	son1 son;
	son.m_a = 100;
//	son.m_b = 100;                到 sonl中m_b是保護權限，類外不可以訪問
}
class Base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son2 :protected Base2
{
	void func()
	{
		m_a = 10;			//父類中公有權限内容 到子類中變成保護權限
		m_b = 10;         //父類中保護權限内容 到子類中是保護權限
		//m_c = 10;        // 父類中的私有成員 不可以訪問
	}
};
void test02()
{
	son2 son;
	/*son.m_a = 100;
	son.m_b = 100;
	son.m_c = 100;*/
	//三個屬性均不可在類外訪問到
}
class Base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son3 :private Base3
{
	void func()
	{
		m_a = 10;			//父類中公有權限内容 到子類中變成保護權限
		m_b = 10;         //父類中保護權限内容 到子類中是保護權限
		//m_c = 10;        // 父類中的私有成員 不可以訪問
	}
};
void test03()
{
	son3 son;
	//son.m_a = 100;		//父類中公有内容 到子類中變成私有權限
	//son.m_b = 100;      //父類中保護内容 到子類中變成私有權限	
	//son.m_c =100			// 父類中的私有成員 不可以訪問
}
class grandson :public son3
{
public:
	void func()
	{
		/*m_a = 10;              //到了son3中 ， m_a變爲私有，即使是公有繼承也無法訪問
		m_b = 10					 //到了son3中 ， m_a變爲私有，即使是公有繼承也無法訪問
		m_c = 10;*/

	}

};
int main()
{
	test01();
}

