// vector_test.cpp: 定义控制台应用程序的入口点。
//向量的练习
//

#include "stdafx.h"
//此头文件可以包含一些头文件或者是标准库的文件，也可以将命名空间包含进去?


int main()
{
	vector<vector<int>> ivec;
	vector<string> svec(10, "null");
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10,42 };
	vector<int> v6{ 10 };
	vector<string> v7{ 10,"hi" };
	int i;
	for (i = 0; i <= 99; i++) {
		v1.push_back(i);
	}
	cout << "pleasse input strings\n";
	vector<int> v8;
	int s;
	while (cin >> s) {
		v8.push_back(s);
	}
	for (auto i : v8) {
		cout << i;
	}
	cout << endl;
	system("pause");
    return 0;
}

