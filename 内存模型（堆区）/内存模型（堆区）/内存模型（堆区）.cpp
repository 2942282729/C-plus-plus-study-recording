#include<iostream>
using namespace std;
//堆区数据由程序员手动管理、开辟，释放用操作符delete
//堆区数据由new关键字进行开辟内存
//利用new创建的数据，会返回该数据对应类型的指针
int* func()
{
	//利用new关键字可以在堆中开辟内存
	int * p = new int(10); 
	return p; //返回整形数据10的地址  

}
//2.在堆区开辟一个数组
void test02()
{
	int * array = new int[10];
	for (int i = 0; i < 10; i++)
	{
		array[i]= i+100;  // 给10个数赋值 100 - 109

	}
	for (int i = 0; i < 10; i++)
	{
		cout<<array[i]<<endl ;

	}
	//释放堆区的数组
	
	//释放数组的时候要在数组名之前添加[]
	
	delete []array;

}
int main()
{
	int * p = func();     // int * p 定义了一个指针变量 p 里面存放了一个地址编号
	
	cout << *p << endl;

	//如果想释放堆区的数据，利用关键字delete
	delete p;
	
	//cout << *p << endl;  //内存已经被释放掉，再次访问就是非法操作,会有错误提示,未初始化的内存p
	
	test02();
	return 0;
}