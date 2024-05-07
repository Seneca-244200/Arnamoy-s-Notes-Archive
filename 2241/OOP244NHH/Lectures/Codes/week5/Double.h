#include<iostream>
using namespace std;
#ifndef SDDS_DOUBLE_H__
#define SDDS_DOUBLE_H__
namespace sdds {
	class Double
	{
	private:
		double val;
	public:
		// constructor, if you make the following explicit, f = 10.0; will not work
		// until you overload the assignment operator
		Double(double d_val = 0.0);
		// member functions
		ostream& print(ostream& ostr = cout);
		istream& read(istream& istr = cin);

		// plus operator
		Double operator+(Double& RO); // a+b
		Double operator+(double RO); // a+3.5

		// plus_eq operator
		Double& operator+=(Double& RO);
		/*bool operator+=(Double& RO);*/

		// unary -
		Double operator-();

		// prefix operator
		Double& operator++();

		// post-fix operator
		Double operator++(int);

		// bool operator
		explicit operator bool();

		// integer cast
		explicit operator int() const;

		// string cast
		explicit operator const char* () const;

		// 
		// getter
		double getVal() const;

		// Assignment operator
		Double& operator=(double d_val);



		friend bool operator==(const Double& LO, const Double& RO);
	};

	// helper operator plus
	Double operator+ (double LO, Double& RO); // 3.5 + a
	bool operator==(const Double& LO, const Double& RO);
}
#endif

