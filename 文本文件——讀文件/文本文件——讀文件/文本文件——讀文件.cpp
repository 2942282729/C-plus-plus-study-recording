// 文本文件——讀文件.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
void test01()
{
	//創建文件流對象
	ifstream ifs;
	//打開文件
	ifs.open("E://C++//C++学习//文本文件 ——寫文件//文本文件 ——寫文件//2022-9-16.txt", ios::in);
	//判斷文件是否能打開
	if (!ifs.is_open())   //如果文件沒有打開
	{
		cout << "文件打開失敗!可能路徑有問題！" << endl;
		return;
	}
	else
	{
		cout << "文件打開成功！" << endl;
	}

	//4.讀取數據
	// 法一：
	//char buf[1024] = { 0 };
	//while (ifs >> buf)           //一行行的讀取文件
	//{
	//	cout << buf << endl;
	//}
	////關閉文件
	//ifs.close();

	//法二：
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	//ifs.close();

	//法三：
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}
	//ifs.close();

	//法四
	//char c;
	//while ((c = ifs.get())!= EOF)        //只要沒有讀到文件尾
	//{
	//	cout << c ;
	//}
	//ifs.close();
}
int main()
{
	test01();


}

