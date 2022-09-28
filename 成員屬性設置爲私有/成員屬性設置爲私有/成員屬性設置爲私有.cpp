// 成員屬性設置爲私有.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include"Person.h"
using namespace std;
    //成員屬性設置爲私有
    // 1.可以自己控制讀寫權限
    // 2. 對於寫可以檢測數據的有效性
int main()
{
    Person p1;
    p1.SetName("陳昊");
    p1.SetAge(20);
    p1.SetLover("memory");
    cout << "p1的姓名為：" << p1.GetName() << endl;
    cout << "p1的年齡為：" << p1.GetAge() << "歲" << endl;
    //cout << "p1的初戀為:" << p1.GetLover() << endl;

}

