#pragma once
// 設計人這個類
#include <string.h>
#include<iostream>
using namespace std;
class Person
{
public:
    //設置姓名
    void SetName(string name)
    {
        m_name = name;
    }
    //獲取姓名
    string GetName()
    {
        return m_name;
    }
    //獲取年齡   可讀可寫 如果想修改 （年齡範圍必須在0~150之間）
    void  SetAge(int age)
    {
        if (age < 0 || age>150)
        {
            cout << "年齡設置錯誤，必須在0-150歲之間" << endl;
            return;  // 在0歲和150歲以外就退出函數
        }
        m_age = age;        //正常的話就賦值
    }

    int GetAge()
    {
        //m_age = 20;         // 初始化為20歲
        return m_age;
    }

    //設置情人只寫
    void SetLover(string lover)
    {
        m_lover = lover;
    }
    /*   string GetLover()              // 取消掉獲取權限，使lover 只能夠設置 不可以被獲取
       {
           return m_lover;
       }*/
private:
    string m_name;     // 可讀可寫 

    int m_age;           //只讀

    string m_lover;     // 只寫
};