// 全局函数做友元.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//建筑物类
class Building
{
	friend void goodfriend(Building* building);            // goodfriend()函数 是Building类的好朋友（友元函数）,可以访问类中的私有成员、保护成员
public:
	Building()
	{
		m_sittingroom = "客厅";
		m_bedroom = "卧室";
	}
public:
	string m_sittingroom; //客厅
private:
	string m_bedroom;    //卧室
};
//全局函数
void goodfriend(Building * building)
{
	cout << "好朋友全局函数 正在访问" << building->m_sittingroom << endl;;
	cout << "好朋友全局函数 正在访问" << building->m_bedroom << endl;;
}
void test01()
{
	Building building;
	goodfriend(&building);
}
int main()
{
	test01();
}

