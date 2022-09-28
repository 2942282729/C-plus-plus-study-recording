// 多態的原理分析.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//静态多态：函数重载和运算符重载属于静态多态，复用函数名
// 动态多态：派生类和虚函数实现运行时多态
//多態
//動物類
class Animal
{
public:
      void Speak()
    {
        cout << "動物在説話" << endl;
    }
};
class Cat :public Animal
{
public:
    //重寫 函數的返回值類型 函數名稱 參數列表 需要完全一致
   
   void Speak()
    {
        cout << "小貓在説話" << endl;
    }
};
class Dog :public Animal
{
public:
    void Speak()
    {
        cout << "小狗在説話" << endl;
    }
};
//執行説話的函數
//地址早綁定 在編譯階段確定了函數地址
//如果想執行讓貓説話 ，那麽這個函數地址就不能提前綁定，需要在運行階段進行綁定，地址晚綁定 ， 動態綁定
void DoSpeak(Animal& animal)       // Animal & animal = cat;       C++允許
{
    animal.Speak();       //加了virtual關鍵字之後這個函數的地址不能被確定，只能哎調用函數的時候確定地址
}
void test01()
{
    Cat cat;
    DoSpeak(cat);
    Dog dog;
    DoSpeak(dog);
}
void test02()
{
    cout << "size of Animal = " << sizeof(Animal) << endl;;

}
//動態多態滿足條件
//1.得有繼承關係
//2.子類要重寫父類的虛函數

//動態多態使用
//父類的指針或者引用來指向子類對象 Animal & animal = cat;     從而在運行中綁定地址
int main()
{
   
    test01();
    test02();
}
