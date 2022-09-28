// 虚析构与纯虚析构.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

//虚析构与纯虚析构
class Animal
{
public:
	virtual void Speak() = 0;
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	//利用虚析构，可以解决父类指针释放子类对象不干净的问题
	//virtual ~Animal()
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}
	//纯虚析构
	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal() = 0;		
	//纯虚析构和虚析构不可以同时存在
};
Animal:: ~Animal()
{
	//Animal下的纯虚析构
	cout << "Animal纯虚析构调用" << endl;
}
class Cat :public Animal
{
public:
	
	virtual void Speak()
	{
		cout <<*m_name<< "小猫在说话" << endl;
	}
	 Cat(string name)
	{
		m_name = new string(name);            //返回string的指针给m_name
	}
	virtual ~Cat()
	{
		//程序释放可能没有清理干净，留下残留数据，此时实际上不为空，强行让他为空一方系统发现不为空再次访问
		if (m_name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete m_name;           //释放掉指针变量m_name
			m_name = NULL;
		}
	}
	string* m_name;
};
void test01()
{
	Animal* animal = new Cat("Tom");
	animal->Speak();
	delete animal;
	//父类指针在析构的时候，不会调用子类中的析构函数，导致子类如果有堆区的属性，会导致内存泄漏
}
int main()
{
	test01();
}
