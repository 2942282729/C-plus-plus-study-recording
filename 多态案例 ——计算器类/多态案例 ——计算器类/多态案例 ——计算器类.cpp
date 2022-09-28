// 多态案例 ——计算器类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//分别用普通和多态技术来实现计算器

class Calculator
{
public:
	int GetResult( string oper)
	{
		if (oper == "+")
		{
			return m_a + m_b;
		}
		else
			if (oper == "-")
			{
				return m_a - m_b;
			}
			else
				if (oper == "*")
				{
					return m_a * m_b;
				}
	//如果想要扩展新的功能，需要修改源码，在真实的开发中，提倡一种原则
	//开闭原则：对扩展进行开放，对修改进行关闭
	}
	int m_a;	// 操作数1
	int m_b;	// 操作数2
};
void test01()
{
	Calculator c;
	c.m_a = 10;
	c.m_b = 10;
	cout << c.m_a << "+" << c.m_b << "=" << c.GetResult("+") << endl;
	cout << c.m_a << "-" << c.m_b << "=" << c.GetResult("-") << endl;
	cout << c.m_a << "*" << c.m_b << "=" << c.GetResult("*") << endl;
}
	//利用多态来实现计算器
	//实现计算器抽象类
class AbstractCaculator
{
public:
	virtual int GetResult()
	{
		return 0;
	}
	int m_a;
	int m_b;
};
//加法计算器类
class AddCaculator : public AbstractCaculator
{
public:
	virtual int GetResult()
	{
		return m_a + m_b;
	}
};
//减法计算器类
class MinusCaculator : public AbstractCaculator
{
public:
	 virtual int GetResult()
	{
		return m_a - m_b;
	}

};
//乘法计算器类
class MultipleCaculator : public AbstractCaculator
{
public:
	virtual int GetResult()
	{
		return m_a * m_b;
	}

};
//除法计算器类
class DivisionCaculator : public AbstractCaculator
{
public:
	virtual int GetResult()
	{
		return m_a / m_b;
	}
};
void test02()
{
	//多态的使用条件
	//父类的指针或者引用来指向子类对象
	
	//实现加法
	AbstractCaculator* abs = new AddCaculator;         //父类的指针指向了子类的add对象
	abs->m_a = 100;
	abs -> m_b = 100;
	cout << abs->m_a << "+" << abs->m_b << "=" << abs->GetResult() << endl;
	//用完销毁
	delete abs;
	
	//实现减法
	abs = new MinusCaculator;
	abs->m_a = 100;
	abs->m_b = 100;
	cout << abs->m_a << "-" << abs->m_b << "=" << abs->GetResult() << endl;
	//用完销毁
	delete abs;
	
	//实现乘法
	abs = new MultipleCaculator;
	abs->m_a = 100;
	abs->m_b = 100;
	cout << abs->m_a << "*" << abs->m_b << "=" << abs->GetResult() << endl;
	//用完销毁
	delete abs;

	//实现除法
	//abs = new DivisionCaculator;
	//abs->m_a = 100;
	//abs->m_b = 100;
	//cout << abs->m_a << "/" << abs->m_b << "=" << abs->GetResult() << endl;
	////用完销毁
	//delete abs;
	
	//父类的引用指向子类的对象
	 DivisionCaculator a;	
	 AbstractCaculator& abc = a;
	 abc.m_a = 100;
	 abc.m_b = 100;
	 cout << abc.m_a << "/" << abc.m_b << "=" << abc.GetResult() << endl;
}
int main()
{
	//test01();
	test02();
}
