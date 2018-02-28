
//用父类指针变量保存子类对象的地址，再用父类调用虚函数


#include "stdafx.h"
#include <iostream>

using namespace std;

class cWork
{
public:
	cWork()
	{
	}
	~cWork()
	{
	}

	virtual void work()
	{
		cout << "在吃" << endl;
	}
	
	void func1()
	{
		cout << "cWrok::func1" << endl;
	}

	int a;
};

class cProgmer:public cWork
{
public:
	cProgmer()
	{
	}

	~cProgmer()
	{

	}

	 void work()
	{
		cout << "在写代码" << endl;
	}

	 void func1()
	 {
		 cout << "cProgmer::func1" << endl;
	 }

	int b;
};

class cDriver:public cWork
{
public:
	cDriver()
	{

	}
	~cDriver()
	{
	
	}
	void work()
	{
		cout << "在开车" << endl;
	}

	void func1()
	{
		cout << "cDriver::func1" << endl;
	}

	int c;

};

int main()
{
	cProgmer* per  = new cProgmer;
	cDriver* pdriver = new cDriver;
	cWork* pwork = per;
	cWork* pwork2 = pdriver;

	per->work();
	pdriver->work();

	pwork->work();
	pwork2->work();

	pwork->func1();
	pwork2->func1();

	delete per;
	delete pdriver;
	//cWork* pWork = NULL;
	//pWork->a = 10;
	//cProgmer* pPer = NULL;
    //cWork* (pPer);
	//pPer->work();

    return 0;
}


