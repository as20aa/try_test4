// inline_constexpr_test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b;
	cout << "Please input two integer" << endl;
	cin >> a >> b;
	cout << multi(10, 20) << endl;
	//multi(a,b) is the inline function and will replace by multi defined in the header file;
	int temp = foo();
	//foo() is constexpr and present a value
	cout << temp << endl;
	system("pause");
    return 0;
}

