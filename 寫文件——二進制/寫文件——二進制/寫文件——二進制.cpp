// 寫文件——二進制.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
using namespace std;
class Person
{
public:
    char m_name[64];
    int m_age;
};
void test01()
{
    //創建流對象
    //ofstream ofs;            構造函數重載
    ofstream ofs("person.txt",ios::out|ios::binary);         //二進制寫文件
    //打開文件
    //ofs.open("E://C++//C++学习//文本文件 ——寫文件//文本文件 ——寫文件//2022-9-16.txt",ios::binary );
    
    //寫文件
    Person p = { "我叫陳昊",19 } ;
    ofs.write((const char*)&p, sizeof(Person));
    
    //關閉文件
    ofs.close();
}
int main()
{
    test01();
    system("pause");
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
