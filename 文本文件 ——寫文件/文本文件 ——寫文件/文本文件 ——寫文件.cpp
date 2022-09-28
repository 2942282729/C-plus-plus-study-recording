// 文本文件 ——寫文件.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
using namespace std;
void test01()
{
    //1. 包含頭文件
    
    //2. 創建流對象
    ofstream ofs;        
    
    // 3.指定打開方式
    ofs.open("2022-9-16.txt", ios::out);     //打開方式：寫文件
    
    //4.寫内容
    ofs << "2022-9-16"<< endl;
    ofs << "明天考英語四級" << endl;
    ofs << "臨時抱佛脚" << endl;
    ofs << "你也加油！！！" << endl;
    
    //5.關閉文件
    ofs.close();
}
int main()
{
    test01();
}