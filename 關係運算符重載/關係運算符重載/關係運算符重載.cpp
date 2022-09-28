// 關係運算符重載.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Person
{
public:
	int m_age;
	string m_name;
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//重載 == 
	bool operator==(Person& p)
	{
		if (this->m_age = p.m_age && this->m_name == p.m_name)
		{
			return true;
		}
		return false;
	}

	bool operator!=(Person& p)
	{
		if (this->m_age != p.m_age || this->m_name != p.m_name)
		{
			return true;
		}
		return false;
	}
};
void test01()
{
	Person p1("chenhao", 19);
	Person p2("chenhao",19);
	Person p3("chenxu", 26);
	if (p1 == p2)
	{
		cout << "p1 = p2" << endl;
	}

	if (p1 != p3)
	{
		cout << "p1 ! = p3" << endl;
	}

}

int main()
{
	test01();
}
