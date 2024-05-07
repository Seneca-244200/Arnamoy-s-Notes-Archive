#include<cstdio>
#include "Output.h"
namespace sdds {
	Output& Output::print(int value)
	{
		printf("%d", value);
		return *this;
	}

	Output& Output::print(double value)
	{
		printf("%lf", value);
		return *this;
	}

	Output& Output::print(const char* value)
	{
		printf(value);
		return *this;
	}
}
