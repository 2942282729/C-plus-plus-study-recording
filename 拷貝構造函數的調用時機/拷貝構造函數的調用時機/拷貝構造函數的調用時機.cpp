// 拷貝構造函數的調用時機.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Person默認構造函數調用" << endl;
	}
	Person(int age)
	{
		cout << "Person默認構造函數調用" << endl;
		m_age = age;
	}
	Person(const Person & p)
	{
		cout << "Person拷貝構造函數調用" << endl;
		m_age = p.m_age;
	}
	~Person()
	{
		cout << "Person析構函數調用" << endl;
	}
	int m_age ;
};
// 使用一個已創建完畢的對象來初始化一個新對象
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的年齡為:" << p2.m_age << "歲" << endl;
	cout << (int*)&p1 << endl;
	cout << (int*)&p2 << endl;
}
//值傳遞的方式給函數參數傳值
void dowork(Person p)
{
	cout << (int*)&p << endl;
}
void test02()
{
		Person p;
		cout << (int*)&p<< endl;
		dowork(p);       // 實參傳遞給形參的時候會調用拷貝構造函數

}
//值方式返回局部對象
Person dowork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person p = dowork2();
	cout << (int*)&p << endl;
}
int main()
{
	test01();
}
