// 函數調用運算符重載.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test;
	}

};
void myprint02(string test)
{
	cout << test;
}
void test01()
{
	MyPrint myprint;	
	myprint("hello world\n");//由於使用起來非常像函數調用，因此稱爲仿函數
	myprint02("你好世界！\n");
}
//仿函數非常靈活，沒有固定的寫法
//加法類
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	MyAdd add;
	int ret = add(10, 20);
	cout << "ret = " << ret << endl;
	//匿名函數對象                首先匿名了對象   其次是重載了小括號
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	test01();
	test02();
}
