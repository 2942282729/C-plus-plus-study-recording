// 構造函數的分類與調用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
class Person
{

public:
	int age;
	Person()  
	{
		cout << "Person()無參構造函數調用" << endl;
	}
	Person(int a )
	{
		age = a;
		cout << "Person(int)有參函數調用" << endl;
	}
	//拷貝構造函數
	Person(const Person &p)   // 必須要以引用的方式傳入
	{
		cout << "Person(const Person &p)拷貝構造函數調用" << endl;	
		age = p.age; //將傳入的人身上所有的屬性拷貝到我的身上
	}
	~Person()
	{
		cout << "Person()析構函數調用" << endl;
	}
};
void test01()
{
	// 1. 括號法
	Person p1;  //無參構造函數調用  
	Person p2(1); // 有參構造函數調用
	Person p3(p2);
	
	//  調用無參構造函數的時候不要加括號
	// Person p1();
	// void  test();
	//編譯器會認爲這是一個函數的聲明而不是在創建對象
	
	cout << "p2的年齡" << p2.age << endl;
	cout << "p3的年齡" << p3.age << endl;
	
	// 2 . 顯示法

	Person p4;
	Person p5 = Person(10);
	Person p6 = Person(5);
	//Person (10);  //匿名對象特點 ：當前行執行結束之後，系統會回收掉匿名對象
	//cout << "aaaa" << endl;

	// 注意事項2 不要利用拷貝構造函數來初始化匿名對象
	//Person(p3);      // 錯誤操作 因爲此前已經有p3了，再寫p3就會重定義

	//3. 隱式轉化法
	Person p7 = 10;     // 相當於 Person p7 = Person(10) ;
	Person p8 = p7; // 拷貝構造

}
int main()
{	
	test01();
	
	return 0;
}
	

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
