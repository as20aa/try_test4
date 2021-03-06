// constructor_test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class x {
	int i;
	int j;
public:
	x() = default;
	x(int val):j(val),i(j){}
	//如果是不按照在class中成员出现顺序进行结构化的话，i将会成为随机乱码
	void print() const{ cout << i; }
};

class x2 {
	int i;
	int j;
public:
	x2(int val):i(val),j(val){}
	void print() const { cout << i; }
};

int main()
{
	x time(10);//此处对time里面的成员赋值，根据的是public下面的构造器，因为构造器是用来初始化的，
	//所以在使用过程中可以通过类似于函数参数传递的方式来进行初始化

	time.print();
	cout << endl;
	x2 time2(10);
	time2.print();
	system("pause");
	return 0;
}
