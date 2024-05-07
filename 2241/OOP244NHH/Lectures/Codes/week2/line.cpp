#include<iostream>
#include "line.h"

using namespace std;
namespace sdds{
	void line(char fill, int length)
	{
		for (int i = 0; i < length; i++) {
			cout << fill;
		}
		cout << endl;
	}
	/*void line(char fill)
	{
		line(fill, 10);
	}*/
	void line(int length)
	{
		line('&', length);
	}
	/*void line()
	{
		line('&', 10);
	}*/
}
