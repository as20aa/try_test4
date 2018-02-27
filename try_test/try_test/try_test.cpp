// try_test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	cout << "Please input two ingeter\n" ;
	int a, b;
	while(cin >> a >> b)
	try {
		if (b == 0) {
			throw runtime_error("the second integer is zero");
		}
		cout << (a / b);
		break;
	}
	catch (runtime_error err) {
		cout << err.what() << "\nTry Again? Enter y or n" << endl;
		char c;
		cin >> c;
		if (!cin || c == 'n')
			break;
		cout << "Please input two integer" << endl;
	}
	system("pause");
    return 0;
}

