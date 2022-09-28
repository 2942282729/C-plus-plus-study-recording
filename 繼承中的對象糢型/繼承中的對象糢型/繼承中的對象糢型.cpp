// 繼承中的對象糢型.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
//继承中的对象模型
class Base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class Son : public Base
{
public:
	int m_d;

};
void test01()
{
	//父類中所有的非靜態的成員屬性都會被子類繼承下去
	//父類中私有的成員屬性 是被編譯器隱藏了，因此是訪問不到，但確實被繼承下了 
	cout << "size of Son\t" << sizeof(Son)<<"字節" << endl;
}
int main()
{
	test01();

}

