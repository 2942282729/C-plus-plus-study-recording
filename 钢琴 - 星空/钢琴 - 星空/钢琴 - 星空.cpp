// 钢琴 - 星空.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
class Instrustment
{
public:
	Instrustment(string t = "乐器", string n = "无名") :type(t), name(n) {}
	virtual  string GetType()const { return "乐器"; }
	virtual string GetName()const { return "无名"; }
protected:
	string type, name;
};
class Piano :public Instrustment
{
public:
	Piano(string n, string t = "钢琴") :Instrustment(t, n) {}
	string GetType() const { return "钢琴"; }
	string GetName() const { return name; }
};
int main()
{
	Instrustment* p = new Piano("星空");
	cout << p->GetType() << endl;
	cout << p->GetName() << endl;
	delete p;
	return 0;
}

