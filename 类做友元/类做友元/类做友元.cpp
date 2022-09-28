// 类做友元.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include<string.h> 
using namespace std;
class Building;        //提前告诉编译器Building这个类，防止一会会报错
//朋友类
class GoodFriend
{
public:
	void visit();     //参观函数 访问Building类中的属性
	GoodFriend();  //Friend 构造函数
	Building * m_building;
};
//建筑物类
class Building
{
	friend class GoodFriend;
	//friend void GoodFriend::visit();
	// 告诉编译器Good Friend类是Building 类的好朋友 ， 可以访问Building类中私有成员
public:
	Building() ;
public:
	string m_sittingroom; //客厅
private:
	string m_bedroom;    //卧室
};
// 类外写成员函数
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}
GoodFriend::GoodFriend()
{
	//创建建筑物对象
	m_building = new Building();      
}
void GoodFriend:: visit()
{
	cout << "好朋友正在访问" << m_building->m_sittingroom << endl;
	cout << "好朋友正在访问" << m_building->m_bedroom << endl;

}
void test01()
{
	GoodFriend  fd;
	fd.visit();

}
int main()
{
	test01();

}