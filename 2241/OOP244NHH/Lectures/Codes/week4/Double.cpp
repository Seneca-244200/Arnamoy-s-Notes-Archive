#include "Double.h"
namespace sdds {
	Double::Double(double d_val)
	{
		val = d_val;
	}
	ostream& Double::print(ostream& ostr)
	{
		// TODO: insert return statement here
		ostr << "Value " << val << endl;
		return ostr;
	}
	istream& Double::read(istream& istr)
	{
		// TODO: insert return statement here
		istr >> val;
		return istr;
	}
	Double Double::operator+(Double& RO)
	{
		return Double(val + RO.val);
	}

	Double Double::operator+(double RO)
	{
		return Double(val + RO);
	}



	Double& Double::operator+=(Double& RO)
	{
		// TODO: insert return statement here
		val += RO.val;
		return *this;
	}
	Double Double::operator-()
	{
		return Double(-val);
	}
	Double& Double::operator++()
	{
		// TODO: insert return statement here
		val++;
		return *this;
	}
	Double Double::operator++(int)
	{
		Double temp = *this;
		++(*this); 
		return temp;
	}
	Double::operator bool()
	{
		return val != 0.0;
	}
	double Double::getVal() const
	{
		return val;
	}
	Double operator+(double LO, Double& RO)
	{
		return RO + LO; // optimized call
		// return Double(LO+RO.getVal());
	}
	bool operator==(const Double& LO, const Double& RO)
	{
		// When we made the function friend, we can have access
		// to private members
		if (LO.val == RO.getVal()) { return true; }
		return false;
	}
}
