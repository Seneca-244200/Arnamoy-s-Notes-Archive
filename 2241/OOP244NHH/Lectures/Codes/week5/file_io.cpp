#include<iostream>
#include<fstream>
using namespace std;
int main_file() {

	//parsing using files

	ofstream fout{ "output.txt" };
	fout << "09Feb 244-NHH " << endl;

	int date;
	char month[4];

	int sub; // 244
	char section[4];


	//"09Feb 244-NHH "
	ifstream fin{ "output.txt" };
	fin >> date >> month >> sub;

	/*fin >> month;*/
	fin.ignore();
	fin >> section;
	cout << date << endl;
	cout << month << endl;
	cout << sub << endl;
	cout << section << endl;





	return 0;

}