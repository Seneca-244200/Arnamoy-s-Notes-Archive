#include <iostream>
using namespace std;

class Container {
	int m_data;
public:
	// constructor
	Container(int data = 0) : m_data(data) {}
	ostream& display(ostream& os) const {
		return os << m_data;
	}
	// plus operator
	Container operator+(const Container& R) const {
		return Container(this->m_data + R.m_data);
	}

};
// helper output operator
ostream& operator<<(ostream& ostr, const Container& C) {
	return C.display(ostr);
}

//// integer version
//int sum(int x, int y) {
//	return x + y;
//}
//
//// Double version, overloaded
//// compile time polymorphism
//double sum(double x, double y) {
//	return x + y;
//}
//
//Container sum(Container x, Container y) {
//	return x + y;
//}

template<typename type>
type sum(type x, type y) {
	return x + y;
}

//template<typename type, typename type1>
//type sum(type x, type1 y) {
//	return x + y;
//}

int main_1() {
	int a, b = 30;
	double e, f = 20.3;
	Container R, C = 20, D;

	a = sum(b, 40);
	e = sum(f, 30.5);
	R = sum(C, D);

	//a = sum(f, b);

	cout << "a: " << a << endl;
	cout << "f: " << e << endl;
	cout << "R: " << R << endl;
	return 0;
}