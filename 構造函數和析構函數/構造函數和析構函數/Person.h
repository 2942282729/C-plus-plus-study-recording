#pragma once
#include <iostream>
using namespace std;
class Person
{
	//構造函數
public:
	
	//構造函數 沒有返回值 也 不用寫void
	// 函數名稱與類名相同
	//有參數 因此可以重載
	//程序會自動調用構造函數 ， 不需要手動操作
	Person()
	{
		cout << "Person()構造函數調用" << endl;
	}

	//析構函數  沒有返回值也不用寫void
	//函數名稱與類名相同，但要在前面加上~
	//析構函數無參數，因此不可以重載
	//程序會自動調用析構函數 , 因此不需要手動操作
	~Person()
	{
		cout << "Person()析構函數調用" << endl;
	}

	
};