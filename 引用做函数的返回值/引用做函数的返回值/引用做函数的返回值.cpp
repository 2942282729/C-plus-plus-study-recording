#include <iostream>
using namespace std;
// 引用做函数的返回值




//1 不要返回局部变量的引用
int & test01()
{
	int a = 10;
	return a;  //利用引用的方式返回

}
 // 函数的调用可以作为左值
// 返回静态变量的引用
int& test02()
{
	static int a = 10;  //静态变量，存放在全局区，全局区上的数据在程序结束之后系统释放
	return a;  //利用引用的方式返回

}
int main()
{
	//非法操作
	// 第一次结果是正确的 ， 是因为编译器做了保留
	//第二次结果错误 ， 是因为内存已经被释放了
	int &ref1 = test01();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl; 
	int&ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	
	//如果函数做左值 ， 必须返回引用
	test02() = 1000;  // 返回 a ,将 a 赋值为1000
	cout << "ref2 = " << ref2 << endl;  //ref2是a的别名 ，内存地址相同 ， 所以ref2也等于1000

	system("pause");
	return 0;

}
