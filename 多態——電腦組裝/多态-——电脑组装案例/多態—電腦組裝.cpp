// 多態——電腦組裝.cpp : 此文件包含 "main" 函數。程序將在此執行并結束。
//
#include <iostream>
using namespace std;
//抽象CPU類
class CPU
{
public:
    //抽象計算函數
    virtual void Caculator() = 0;
};
//抽象顯卡類
class GraphicsCard
{
public:
    //抽象顯示函數
    virtual void Display() = 0;

};
//抽象内存類
class InternalStorage
{
public:
    //抽象存儲函數
    virtual void Storage() = 0;
};
class Computer
{
    //構造函數傳三個零件的接口
    //提供工作的函數
    //{
            //調用每個零件的接口
    //}
public:
    //Computer構造函數
    Computer(CPU* cpu, GraphicsCard* card, InternalStorage* storage)
    {
        m_cpu = cpu;
        m_card = card;
        m_storage = storage;
    }
    void DoWork()     //電腦運行函數
    {
        m_cpu->Caculator();
        m_card->Display();
        m_storage->Storage();
    }
    //提供    Computer析構函數 ， 釋放三個零件的内存
    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_card != NULL)
        {
            delete m_card;
            m_card = NULL;
        }
        if (m_storage != NULL)
        {
            delete m_storage;
            m_storage = NULL;
        }


    }
private:
    CPU* m_cpu;
    GraphicsCard  *m_card;
    InternalStorage* m_storage;
};
//具體廠商
//Intel廠商
class IntelCpu :public CPU
{
public:
  virtual  void Caculator()
    {
        cout << "Intel CPU開始計算!" << endl;
    }
};
class IntelGraphicsCard :public GraphicsCard
{
public:
    virtual void  Display()
    {
        cout << "Intel顯卡開始計算!" << endl;
    }
};
class IntelInternalStorage :public InternalStorage
{
public:
    virtual void Storage()
    {
        cout << "Intel内存條開始存儲!" << endl;
    }
};
//联想厂商
class LenovoCpu :public CPU
{
public:
    virtual  void Caculator()
    {
        cout << "Lenovo CPU開始計算!" << endl;
    }
};
class LenovoGraphicsCard :public GraphicsCard
{
public:
    virtual void  Display()
    {
        cout << "Lenovo顯卡開始顯示!" << endl;
    }
};
class LenovoInternalStorage :public InternalStorage
{
public:
    virtual void Storage()
    {
        cout << "Lenovo内存條開始存儲!" << endl;
    }
};
void Start()
{
    cout << "第一臺電腦開始工作" << endl;
   //第一台电脑零件
    CPU *cpu1 = new IntelCpu;
    GraphicsCard* card1 = new IntelGraphicsCard;
    InternalStorage* storage1 = new IntelInternalStorage;
    Computer *computer1 = new Computer(cpu1, card1, storage1);
    computer1->DoWork();
    delete computer1;
    cout << "----------------------------" << endl;
    cout << "第二台電腦開始工作" << endl;
    Computer* computer2 = new Computer(new LenovoCpu, new LenovoGraphicsCard,new LenovoInternalStorage);
    computer2->DoWork();
    delete computer2;
    cout << "----------------------------" << endl;
    cout << "第三台電腦開始工作" << endl;
    Computer* computer3 = new Computer(new LenovoCpu, new IntelGraphicsCard, new LenovoInternalStorage);
    computer3->DoWork();
    delete computer3;
    
}
int main()  
{
    Start();
}
