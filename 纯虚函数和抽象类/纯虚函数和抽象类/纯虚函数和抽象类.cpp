// 纯虚函数和抽象类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//纯虚函数与抽象类
class Base
{
    //纯虚函数 
    //只要有一个纯虚函数，这个类称为抽象类
    //抽象类的特点
    //1.无法实例化对象
    //2.抽象类的子类，必须要重写父类中的纯虚函数，否则也属于抽象类
public:
    virtual void func() = 0;             //纯虚函数定义
};
class Son :public Base
{
public:
    //如果不重写父类的纯虚函数，那么子类也会是抽象类，无法实例化对象
   virtual void func()
    {
        cout << "Son func()调用";
    }
};
void test01()
{
    //Base b;            抽象类无法实例化对象
    //new Base;        抽象类无法实例化对象
    Base* b = new Son;
    b->func();
}
int main()
{
    test01();
}
