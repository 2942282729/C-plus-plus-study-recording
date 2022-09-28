#include <iostream>
using namespace std;
// 引用的使用
//引用的本质是给变量起一个别名
//语法： 数据类型 &别名 = 原名 

int main()
{
    int a = 10;
    cout<<"a=" << a << endl;
    cout << (int)&a << endl;  //输出a的地址
    int& b = a;
    cout << "b=" << b << endl;
    b = 20;
    cout << b << endl;
    cout << (int)&b << endl; //输出b的地址
    
    //注意事项:引用必须要初始化 ，且不可以改变了 
        
    //  int &c;  是错误的，没有出初始化
    int c = 30;
    b = c;    // 赋值操作（而不是更改引用） 把 b内存指向的值改为30
    cout << a << endl;   // b和a指向同一个值，b被改了，那么a也会变为30
    cout << b << endl;  
    cout << c << endl;   
}
