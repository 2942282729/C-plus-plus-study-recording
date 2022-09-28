// const修飾成員函數（常函數）.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// const 后面加成员函数之后称为常函数，常函数内 不可以修改成员属性 ， 但是加上了mutable 之后就可以修改了
//声明对象之前加上const 之后成为常对象 ， 常对象只能调用常函数

#include <iostream>
using namespace std;
//常函數
class Person
{
public:
	//this 指針的本質 是指針常量 指針的指向是不可以修改的
	//Person *  const this     是不允許修改指針的指向的
	//在成員函數後面加const ，修飾的是this指向，讓指針指向的值也不可以修改
	void showperson()       const
	{
		//m_a = 100;        // 加了const 之後，屬性值就不可以被改變
		//this = NULL;      //this指針是不允許修改指針的指向的
		m_b = 100;     //加了mutable 之後就可以修改了
	}
	void test02()
	{

	}
	int m_a;
	mutable int m_b;
};
//常對象
void test01()
{
	const Person p;     // 常對象
	//p.m_a = 100;     不允許修改
	p.m_b = 100;        // 在常對象下也可以修改
	p.showperson();
	//p.test02();          常對象不可以調用普通成員函數 ， 因爲普通成員函數是可以修改成員的屬性的z
}

int main()
{

}

