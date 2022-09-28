//函数参数传递的方式
//值传递 and 地址传递（利用形参可以修改实参） and 引用传递
//定义一个交换函数
#include <iostream>
using namespace std;

void print(int x, int y)
{
	cout << "a = " << x << "\t";
	cout << "b = " << y << endl;


}
void swap01(int x, int y)      // 值传递, 形参不会修饰实参
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
		cout << "通过值传递交换之后的结果:  ";
		
	}

void swap02(int* x, int* y)   // 地址传递 形参会修饰实参
{
	
	int temp = *x;
	*x = *y;
	*y = temp;
	cout << "通过地址传递交换之后的结果:  ";

}

//引用是给变量起别名的，利用引用传递可以直接修改实参的值
void swap03(int &x, int &y)   // 地址传递 形参会修饰实参
{
	int temp = x;
	x= y;
	y = temp;
	cout << "通过引用传递交换之后的结果:  ";

}
int main()
{
	int a = 10;
	int b = 20;
	cout << "a的原始值为:" << a << endl;
	cout << "b的原始值为:" << b << endl;
	swap01(a, b);
	print(a, b);
	/*swap02(&a,&b);
	print(a, b);*/
	swap03(a, b);
	print(a, b);
	
	

}
