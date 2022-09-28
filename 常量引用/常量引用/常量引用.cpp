// 常量引用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
using namespace std;
 // 作用 常量引用主要用来修饰形参 ， 防止误操作 
//在函数的参数列表中，加const修饰形参，防止形参改变实参

void show(const int &value)
{
	//value = 1000;        // 由于加入了const 修饰符 ，常量引用，防止误修改值
 	cout << "VAL = " << value << endl;

}

int main()
{
	////常量引用
	////使用场景 修饰形参 ， 防止误操作
	//int a = 10;
	////int& p = 10; //错误操作： 提示非常量引用的初始值必须为左值 ,必须引用一块合法的内存空间
	//const int & ref = 10; 
	////ref = 20;   //错误操作： 加入const之后变为只读，不可以修改

	int b = 100;
	cout << "b = " << b << endl;

	show(b);
	cout << "b = " << b << endl;

}

