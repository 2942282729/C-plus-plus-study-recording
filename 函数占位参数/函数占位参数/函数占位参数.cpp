// 函数占位参数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
using namespace std;
//占位参数
//目前阶段占位参数用不到 ， 后续学习会用到

void func1(int a , int)
{
	cout << "this is a function1 ! " << endl;
}
//占位参数 还可以有默认参数 
void func2(int a =10, int =10)
{
	cout << "this is a function2 ! " << endl;
}
int main()
{
	func1(1,1);
	func2();
	system("pause");
	return 0 ;
}
