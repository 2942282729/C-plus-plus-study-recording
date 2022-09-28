// 赋值运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		m_age = new int	(age);	    //創建在堆區
	}
	~Person()
	{
		if (m_age != NULL)             //淺拷貝堆區内存重複釋放，導致程序崩潰    需要利用深拷貝來解決淺拷貝的問題
		{
			delete m_age;
			m_age = NULL;
		}	
	}
	Person & operator=(Person& p)
	{
		//應該先判斷是否有屬性在堆區，如果有顯示放乾净，然後再深拷貝
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);
		return *this;       //返回傳入的這個對象
	}
	int* m_age;	
};
void test01()
{
	Person p1(18);  			
	Person p2(20);
	Person p3(17);
	p3 = p2 = p1;  // 賦值操作
	cout << "p1的年齡為"<< * p1.m_age << endl;
	cout << "p2的年齡為" << *p2.m_age << endl;
	cout << "p3的年齡為" << *p3.m_age << endl;
}
int main()
{
	test01();
}
