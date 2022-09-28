
#include <iostream>
using namespace std;
// 内存分区模型
//程序运行之前
//1.代码区   存放函数的二进制代码，由操作系统管理  存放CPU的机器指令
// 特点：共享(对于频繁执行的程序在内存中只要有一份代码即可) 、 只读（防止程序意外修改代码）

//2.全局区  存放全局变量，静态变量，以及常量（常量氛围字符串常量以及const修饰的全局变量）
// 全局区还包含了常量区、字符串常量、和其他常量
// 特点：由程序结束后由操作系统释放
// 
//程序运行之后
//3.栈区  由编译器自动分配释放， 存放函数的参数值，局部变量

//4.堆区  由程序员分配和释放，若程序员不释放，程序结束由操作系统回收

//内存四区的意义，赋予不同的生命周期，给我们更大的编译灵活性


//创建全局变量  g_a 、g_b
int g_a = 10;
int g_b = 10;

//const 修饰的全局变量
const int c_g_a = 10;  //const修饰的全局常量
const int c_g_b = 10;//const修饰的全局常量
int main()
{
    //全局区

    //全局变量(没有写到函数体中的变量)、静态变量、常量

    // 创建普通局部变量

    int a = 10;
    int b = 10;
    cout << "局部变量a的地址为\t" << (int)&a << endl;
    cout << "局部变量b的地址为\t" << (int)&b << endl;

    cout << "全局变量g_a的地址为\t" << (int)&g_a << endl;
    cout << "全局变量g_b的地址为\t" << (int)&g_b << endl;

    //创建静态变量  在普通局部变量之前加上static修饰符
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a的地址为\t" << (int)&s_a << endl;
    cout << "静态变量s_b的地址为\t" << (int)&s_b << endl;

    //字符串常量
    cout << "字符串常量 hello world的地址为:\t" << (int)&"hello world" << endl;

    //const 修饰变量

    //const 修饰的全局变量
    cout << "const修饰的全局常量c_g_a地址为:\t" << (int)&c_g_a << endl;
    cout << "const修饰的全局常量c_g_b地址为:\t" << (int)&c_g_b << endl;

    //const 修饰的局部变量

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "const修饰的局部变量c_l_a地址为:\t" << (int)&c_l_a << endl;
    cout << "const修饰的局部变量c_l_b地址为:\t" << (int)&c_l_b << endl;

    system("pause");
}

