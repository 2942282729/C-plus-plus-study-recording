// 空指針調用成員函數.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//空指針調用成員函數
class Person
{
public:
	//Person(int a)
	//{
	//	m_age = a;
	//}
	void showclassname()
	{
		cout << "這是Person類" << endl;
	}
	void showpersonage()
	{
		//報錯原因是傳入的指針為空，this指針指向的是空的
		if (this == NULL)
		{
			return;     // 傳入空指針就退出去
		}
		cout << "age = " << this->m_age << endl;
	}
	int m_age;
};
void test01()
{
	Person* p = new Person;	 // 空指針
	//p->showclassname();
	p->showpersonage();
}
int main()
{
	test01();

}

