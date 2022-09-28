// 加号运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//运算符重载 对已有的运算符重新进行定义 ， 赋予其另外一种功能 ， 以适应不同的数据类型
//对于内置的数据类型 编译器知道该如何进行运算, 但是用户自定义的数据类型是不可以的
//不要滥用运算符重载！！！
class Person
{
public:
        //Person operator+(Person& p)      //成员函数运算符重载
        //{
        //    Person temp;
        //    temp.m_a = this->m_a + p.m_a;
        //    temp.m_b = this->m_b + p.m_b;
        //    return temp;
        //}
    int m_a;
    int m_b;
};
// 全局函数重载
Person operator+(Person& p1, Person& p2)
{
    Person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;
    return temp;
}
//运算符重载以及函数重载
//Person operator+(Person& p1, int num)
//{
//    Person temp;
//    temp.m_a = p1.m_a + num;
//    temp.m_b = p1.m_b + num;
//    return temp;
//}
void test01()
{
    Person p1;
    p1.m_a = 10;
    p1.m_b = 10;
    Person p2;
    p2.m_a = 10;
    p2.m_b = 10;

    //成员函数重载本质的调用
   /* Person p3 = p1.operator+(p2);*/
       //全局函数重载本质的调用
    //Person p3 = operator+(p1,p2);
    Person p3 = p1 + p2;
    //int a = 100;
    //Person p3 = p1 + a;
    cout << p3.m_a << endl;
    cout << p3.m_b << endl;
}
int main()
{
    test01();
    
}
