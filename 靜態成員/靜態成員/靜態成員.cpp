// 靜態成員.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
// 靜態成員變量
/*
	1.所有對象共享一份數據
	2.在編譯階段分配内存
	3.類内聲明，類外初始化
*/
// 靜態成員函數
/*
	1.所有對象都共用一個函數
	2.靜態成員函數只能訪問靜態成員變量			
*/
class Person
{
public:
	static int m_A;            
private :
	static int m_B;
};
int Person::m_A = 18;      // 類外初始化
int Person::m_B= 19;
void test01()
{
	Person p;
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p2.m_A << endl;
	cout << p.m_A << endl;       
}

void test02()
{
  // 靜態成員變量 不屬于某個對象上，所有對象都共享同一份數據
//因此靜態成員變量有兩種訪問方式
	//1.通過對象訪問
	Person p;
	cout << p.m_A << endl;;

	//2. 通過類名訪問
	cout << Person::m_A << endl;
   //  cout << Person::m_B << endl;       private 不可在類外訪問

}
int main()
{

	test01();
	test02();
	


}