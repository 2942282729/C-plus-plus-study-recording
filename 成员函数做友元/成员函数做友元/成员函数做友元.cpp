// 成员函数做友元.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using  namespace std;
class Building;      // 告诉编译器有这个类，待会儿会写
class GoodFriend
{
public:
	
	GoodFriend();
	void visit1();   // visit1()可以访问Building 中的私有成员
	void visit2(); //visit2()不可以访问Building 中的私有成员
	Building* building;
};
class Building
{
	friend void GoodFriend:: visit1();     //告诉编译器GoodFriend下的visit1函数作为本类的好朋友
public:
	string m_settingroom;
	Building();
private:
	string m_bedroom;

};
//类外实现成员函数
Building::Building()
{
	m_settingroom = "客厅";
	m_bedroom = "卧室";
}
GoodFriend::GoodFriend()
{
	building = new Building;
}
void GoodFriend::visit1()
{
	cout << "visit1 正在访问" << building->m_settingroom << endl;
	cout << "visit1 正在访问" << building->m_bedroom << endl;
}
void GoodFriend::visit2()
{
	cout << "visit2 正在访问" << building->m_settingroom << endl;
	//cout << "visit2 正在访问" << building->m_bedroom << endl;     非友元函数，无法访问私有内容
}
void test()
{
	GoodFriend fd;
	fd.visit1();
	fd.visit2();
}
int main()
{
	test();
}

