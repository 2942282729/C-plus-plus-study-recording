
#include <iostream>
using namespace std;
int main()
{

	int* p;
	//int a = 9;
	//p = &a;
	*p = 9;//错误的用法
	cout << "*p的值为:" << *p << endl;
	return 0;
	//错误提示:使用了未初始化的局部变量P




}

