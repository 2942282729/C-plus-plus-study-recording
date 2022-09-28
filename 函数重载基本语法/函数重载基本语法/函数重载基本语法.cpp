// 函数重载基本语法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


#include <iostream>
using namespace std;
// 函数重载：函数名称相同 ， 提高复用性
//函数重载满足条件
//1.同一个作用域下
//2.函数名称相同
//3. 函数的参数类型不同或个数不同或顺序不同


void func()
{
	cout << "func()调用" << endl;

}

void func(int)
{
	cout << "func(int)调用！" << endl;

}
void func(double)
{
	cout << "func(double)调用！" << endl;

}
void func(int ,double)
{
	cout << "func(int , double)调用！" << endl;

}
void func(double, int)
{
	cout << "func(double, int)调用！" << endl;

}
//int  func(double, int)           //函數的返回值不可以作爲函數重載的條件 
//{
//	cout << "func(double, int)调用！" << endl;
//
//}
int main()
{
	
	func();
	func(10);
	func(3.14);
	func(10,  3.14);
	func(3.14,  10 );
	system("pause");

	/*
	注意事項 函數的返回值不可以作爲函數重載的條件 
	
	*/

	return 0;
}
