// 菱形繼承.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//菱形繼承
//動物類
class Animal
{
public:
	int m_age;

}; 
//加上virtual 關鍵字變爲虛繼承
//Animal類變爲虛基類
//🐏類
class Sheep :virtual public Animal      
{

};
//馱類
class Tuo :virtual public Animal
{

};
class SheepTuo :public Sheep, public Tuo
{

};void test01()
{
	SheepTuo st;	
	//黨兩個基類有同名屬性時，需要加作用域來區分
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 26;
	cout << st.Sheep::m_age << endl;
	cout << st.Tuo::m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
