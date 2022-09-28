// 封装 class 与 struct 的区别.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
using namespace std ;
//struct   和 class 的區別
    //struct 默認權限是 public 
    // class 默認權限是 private
class C1
{
    int m_A;  // 默認權限是 private
};
struct C2
{
    int m_A ;  // 默認權限是公共
};
int main()
{
    C1 c1;
    //c1.m_A = 1000;        // 錯誤代碼： 不可訪問
    C2 c2;
    c2.m_A = 1000;     // 可以訪問
    
    system("pause");
}


