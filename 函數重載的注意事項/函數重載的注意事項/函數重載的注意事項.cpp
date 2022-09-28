// 函數重載的注意事項.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
// 函數重載的注意事項
// 1.引用作爲重載的條件

void func(int&)                  // int & a =10  非法操作
{
    cout << "func(int &)調用！" << endl ;
}
//加了const 只能讀不可以寫   
void func(const int &)     //  相當於 const int & a = 10;  合法操作
{
    cout << "func(const int &)調用！" << endl;
}

// 函數重載碰到默認參數 ,所以盡量避免有默認參數
void func2(int)
{
    cout << "func2(int )調用！" << endl;
}

//void func2(int , int  =10)
//{
//    cout << "func2(int , int )調用！" << endl;
//}

int main()
{
    int a = 10 ; 
    func(a);  // 走第一個函數func( int &)

    func(10); //調用第二個函數func(const int&) 
    func2(10);
    //func2(10, 10);
}


