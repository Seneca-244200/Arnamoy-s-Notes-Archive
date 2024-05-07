#include <iostream>
using namespace std;

class Container_res {
	int* m_data{};
public:
	Container_res() = default;
	// one arg constructor
	Container_res(int data) : m_data(new int(data)){
		//m_data = new int(data); // way 1
		//m_data = new int; // way 2
		//*m_data = data; //
	}

	//Container_res(const Container_res& C) = delete;

	//Container_res& operator=(const Container_res& C) = delete;

	// Copy assignmnet operator
	Container_res& operator=(const Container_res& C) {
		if (this != &C) {
			delete m_data;
			m_data = nullptr;
			if (C.m_data) {
				m_data = new int;
				*m_data = *C.m_data;
			}
		}
		return *this;
	}

	// copy constructor
	Container_res(const Container_res& C) {
		operator=(C);
	}

	// destructor
	virtual ~Container_res() { delete m_data; }
	// end of rule of three

	ostream& display(ostream& os) const {
		if (m_data) {
			return os << *m_data;
		}
		else {
			return os << "NO DATA";
		}
	}
	// plus operator
	Container_res operator+(const Container_res& R) const {
		return Container_res((this->m_data ? *m_data :0) + (R.m_data?*R.m_data:0));
	}

	// comparison operator
	bool operator>(const Container_res& R) const {
		return (m_data ? *m_data : 0) > (R.m_data ? *R.m_data : 0);
	}


};

// helper output operator
ostream& operator<<(ostream& ostr, const Container_res& C) {
	return C.display(ostr);
}


/*
 The class have to enable copy contructor and
 copy assignment operator

 Class has to overload the + operator
*/
template<typename type>
type sum(type x, type y) {
	return x + y;
}

/*
* Copy constructor and copy assignment operator 
* should be enabled for the class
*/
template<typename T1>
void swap_mine(T1& a, T1& b) {
	T1 temp = a;
	a = b;
	b = temp;
}

/*
* The class objects should be comparable
*/
template <typename type>
void sort(type* list, long size) {
	long i, j;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1; j++) {
			if (list[j] > list[j + 1]) {
				swap_mine(list[j], list[j + 1]);
			}
		}

	}
}

/*
* The class member should be printable
*/
template<typename T>
void showArray(T* array, long size) {
	for (int i = 0; i < size; i++) {
		cout << array[i];
		if (i != size - 1) cout << ",";
	}
	cout << endl;
}

int main() {
	Container_res C[]{ 2, 5, 3, 4, 10, 1, 2 };

	sort(C, 7);

	showArray(C, 7);



	//R = sum(C, D); // sum (Container_res x = C, Container_res y = D);

	//a = sum(f, b);

	//cout << "R: " << R << endl;
	return 0;
}