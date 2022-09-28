// 函数的默认参数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

// C++中 ，函数的形参列表是可以有默认值的
#include <iostream>
using namespace std;
//函数的默认参数

int func1(int a, int b = 20 , int c=30)
{
    return a + b + c;
}

// 注意事项：如果某个位置已经有了默认参数 ， 那么从这个位置往后从左往右都 必须 要有默认值

// 如果函数声明有默认参数， 函数实现就不可以有默认参数
int func2(int a =10, int b = 10);  // 声明函数 func2(int a ,int b)
//声明和实现只能有一个默认参数
//int func2(int a = 20, int b = 20)  //错误提示:func2重定义默认参数
// {
//        return a + b;
//    
// }
int func2(int a, int b)
{
    return a + b;
}
int main()
{
    //自己传入数值就用自己的，没有的话就用默认的
    cout << func1(10) << endl; // 默认参数 b = 20 ,c = 30
    cout << func2() << endl;
    system("pause");
    return 0;
}
 