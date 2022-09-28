// 封裝的意義.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// C++面向對象三大特性：封裝 、 繼承 、 多態
#include <iostream>
using namespace std;
// 設計一個圓類 ， 求周長
//圓周長公式 ： 2 * PI * 半徑
const double PI = 3.14;
class  Circle
{
	//訪問權限
public:
	//屬性 
	int m_r;  //圓的半徑

	double calculateZC()
	{
		return 2 * PI * m_r ;  
	}

};
int main()
{
	Circle c1;
	c1.m_r = 10;
	cout << "半徑為" << c1.m_r << "的圓的周長為" << c1.calculateZC() << endl; ;
	system("pause");
	return 0;
}

