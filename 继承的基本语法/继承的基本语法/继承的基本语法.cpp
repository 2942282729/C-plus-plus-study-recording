// 继承的基本语法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//普通实现界面
//繼承的好處：減少重複代碼
// 語法：class 子類：繼承方式 父類 
// 子類也稱爲派生類 父類也稱為基類
//繼承實現頁面
class BasePage         //基類頁面
{
public:
    void header()
    {
        cout << "首頁、公開課、登錄、注冊....（公共分類列表）" << endl;
    }
    void left()
    {
        cout << "Java、C++、C#、Python....(左側分類列表)" << endl;
    }
    void footer()
    {
        cout << "幫助中心、交流合作、站内地圖....(公共底部)" << endl;
    }

};
//Java頁面 （派生類）
class Java :public BasePage
{
public:
    void content()
    {
        cout << "Java學習視頻" << endl;
    }
};
//Python 頁面
class Python : public  BasePage
{
public:
    void content()
    {
        cout << "Python學習視頻" << endl;
    }
};
//C++頁面
class CPP : public  BasePage
{
public:
    void content()
    {
        cout << "C++學習視頻" << endl;
    }
};
void test01()
{
    cout << "Java下載視頻界面如下:" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "---------------------------------------------" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout << "---------------------------------------------" << endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();

}
int main()
{
    test01();
    system("pause");
    return 0;
}

