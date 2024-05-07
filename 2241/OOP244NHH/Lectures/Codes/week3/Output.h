#ifndef SDDS_OUTPUT_H__
#define SDDS_OUTPUT_H__
namespace sdds {
	class Output
	{
	public:
		Output& print(int value);
		Output& print(double value);
		Output& print(const char* value);
	};
}
#endif

