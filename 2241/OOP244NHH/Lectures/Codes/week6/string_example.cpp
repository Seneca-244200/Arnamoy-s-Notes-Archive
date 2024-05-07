#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

int main() {
	char* str; // our own dynamic memory allocation
	string strs;

	cout << "Please input a string" << endl;
	std::getline(cin, strs);  // this dynamically allocates needed amount of space for string

	//int len = 1000000;
	str = new char[strs.length() + 1];
	strcpy(str, strs.c_str());

	//cin >> str;

	cout << str << endl;

	delete[] str;

	return 0;
}