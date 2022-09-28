// this指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//this 指针指向被调用的成员函数所属的对象
//this指针是隐含每一个非静态成员函数内的一种指针
//this指针无需定义，直接使用即可
//this指针的用途：
//1. 解决名称冲突
//2.返回对象本身用*this

class Person
{
public:
	Person(int age)          //有参构造函数     所属的是p1这个对象 ，所以this指向了p1
	{
		this->age = age;       // this指针指向的是被调用的成员函数所属的对象
	}
	int age;

	Person&  PersonAddAge(Person &p)    //引用的方式传入,引用的方式返回
	{
		this->age += p.age;
		//this指向的是被調用的成員函數所書的對象 ， 返回*this就是這個對象本體
		return *this;
	}
};
//1. 解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年齡為" << p1.age << "歲" << endl;
}
//2.返回对象本身用*this
void test02()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年齡為" << p2.age << "歲" << endl;
}
int main()
{
	test01();
	test02();
}

