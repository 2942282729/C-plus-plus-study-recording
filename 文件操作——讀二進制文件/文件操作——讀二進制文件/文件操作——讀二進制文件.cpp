// 文件操作——讀二進制文件.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
using namespace std;
class Person
{
public:
	char m_name[64];
	int m_age;
};
void test01()
{
	//創建文件流對象
	ifstream ifs;
	//打開文件
	ifs.open("E://C++//C++学习//寫文件——二進制//寫文件——二進制//person.txt", ios::in | ios::binary);
	//判斷文件是否打開成功
	if (!ifs.is_open())
	{
		cout << "文件打開失敗" << endl;
		return;
	}
	else
	{
		cout << "文件打開成功" << endl;
	}
	//讀文件
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "姓名: " << p.m_name << endl<< "年齡" << p.m_age << endl;
	ifs.close();
}
int main()
{
	test01();

}
