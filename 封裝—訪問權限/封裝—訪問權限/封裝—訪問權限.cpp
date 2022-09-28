// 封裝—訪問權限.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

// 访问权限：
//  公共   public          类内外均可访问
//  私有   private        类内可以访问 类外不可以访问      子类不可以访问基类的私有内容
//  保护   protected    类内可以访问 类外不可以访问    子类可以访问基类中保护的内容
#include <iostream>
using namespace std;
class Person
{
	//  公共   public  
public:
	string  m_Name;        // 姓名
protected:
	string m_Car;			//汽车
private:
	string m_Password;    // 银行卡密码
public:
	void func()
	{
		m_Name = "陈昊";
		m_Car = "梅赛德斯";
		m_Password = "5236980";
	}
};
int main()
{
	Person p1;
	p1.m_Name = "Cristiano·Ronaldo";
	cout << p1.m_Name << endl;
	p1.func();
	cout << p1.m_Name << endl; 

}
