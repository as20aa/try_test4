// main_command_line_test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(int argc,char **argv)
{
	string s;
	int i = 1;
	for (; i != argc;  i++) {
		cout << argv[i];
	}
	cout << endl;
	cout << i;
	cout << endl;
	system("pause");
    return 0;
}

