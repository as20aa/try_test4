// Pointer_test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int i = 42;
	const int *cp = &i;
	const int &r = i;
	const int &r2 = 42;
	system("pause");
    return 0;
}

