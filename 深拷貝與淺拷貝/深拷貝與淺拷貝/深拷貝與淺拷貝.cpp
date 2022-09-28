#include <iostream>
using namespace std;
// 淺拷貝 ： 問題是堆區的内存重複釋放 需要利用深拷貝來解決
//深拷貝
class Person
{
public : 
	int m_age;
	int* m_height;
	Person()
	{
		cout << "Person的默認構造函數調用" << endl;
	}
	Person(int age,int height)
	{		
		m_age = age;
		m_height = new int(height);     //new 返回一個指針
		cout << "Person的有參構造函數調用" << endl;

	}
	//自己實現拷貝構造函數，來解決淺拷貝的問題
	Person(const Person& p)
	{
		cout << "Person的拷貝構造函數調用" << endl;
		m_age = p.m_age;
		//m_height = p.m_height  這個是編譯器默認的拷貝構造函數調用
	
		//深拷貝操作
		m_height = new int(*p.m_height);  //指針m_height 指向一個新的内存空間
	
	}
	~Person()
	{
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;   // 防止野指針出現
		}
		cout << "Person的析構函數調用" << endl;
	}


};

void test01()
{
	Person p1(18,180);
	cout << "p1的年齡是：" << p1.m_age << endl;
	cout << "p1的身高是：" << *p1.m_height << endl;
	Person p2(p1);
	cout << "p2的年齡是：" << p2.m_age << endl;
	cout << "p2的身高是：" << *p2.m_height << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}

