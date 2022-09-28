// 類對象作爲類成員.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;

class Phone
{
public:
    Phone(string pname) : m_PName(pname)        //初始化列表
    {
        cout << "Phone構造函數調用" << endl;
    }
    string m_PName;
    ~Phone()
    {
        cout << "Phone析構函數調用" << endl;
    
    }

};
class Person
{
public:
    string m_Name;      // 姓名
    Phone m_Phone;     // 手機
     Person(string name , string pname ) : m_Name(name) ,m_Phone(pname)
    {
         cout << "Person構造函數調用" << endl;
    }
     ~Person()
     {
         cout << "Person析構函數調用" << endl;
     
     }
};
//當其他類成員作爲本類成員，構造的時候要先構造其他類的成員，再構造自身，析構順序與構造相反
void test01()
{
    Person p("陳昊", "IPhone11");
    cout << p.m_Name << "使用" << p.m_Phone.m_PName << endl;

}
int main()
{
 
    test01();
        
}