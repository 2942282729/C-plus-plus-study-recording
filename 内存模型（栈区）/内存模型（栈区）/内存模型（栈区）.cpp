
#include <iostream>
using namespace std;
// 栈区 由编译器自动分配释放 ，存放函数的参数值，局部变量
//注意：不要返回局部变量的地址，栈区开辟的地址由编译器自动释放
int * func(int b)
{
	int a = 10;  // 局部变量存放在栈区，栈区的数据在执行完函数之后自动释放
	return &a;
}

int main()
{
	int* p = func(1);
	cout << *p << endl;  //第一次可以打印正确的数字 ，编译器做出了保留
	cout << *p << endl;  // 第二次这个数据就不会保留了，所以不要返回局部变量的地址   
	
}

