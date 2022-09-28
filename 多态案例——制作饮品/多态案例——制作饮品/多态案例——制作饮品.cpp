// 多态案例——制作饮品.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//多态案例2 制作饮品

class AbstractDrinking
{
public:
	virtual void Boil() = 0;        //煮水接口

	virtual void Brew() = 0;         //冲泡接口

	virtual void PourInCup() = 0;   //倒入杯中

	virtual void PutSomething() = 0;     //加辅料

	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}

};
class Coffee :public AbstractDrinking
{
public:
	virtual void Boil()			//煮水
	{
		cout << "煮山泉水" << endl;
	}

	virtual void Brew()         //冲泡接口
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void PourInCup()   //倒入杯中
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSomething()      //加辅料
	{
		cout << "加入糖和牛奶" << endl;
	}

};
class Tea :public AbstractDrinking
{
public:
	virtual void Boil()			//煮水
	{
		cout << "煮井水" << endl;
	}

	virtual void Brew()         //冲泡接口
	{
		cout << "冲泡茶叶" << endl;
	}
	virtual void PourInCup()   //倒入杯中
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSomething()      //加辅料
	{
		cout << "加入枸杞" << endl;
	}
};

void DoWork(AbstractDrinking* abs)    //AbstractDrinking* abs = new Coffee;               形参接受实参
{
	abs->MakeDrink();
	delete abs;
}

void test01()
{
	cout << "制作咖啡" << endl;
	DoWork(new Coffee);
	cout << "-----------------------" << endl;
	cout << "制作茶水" << endl;
	DoWork(new Tea);
}
int main()
{
	test01();
}

