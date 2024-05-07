#ifndef SENECA_NAME_H__
#define SENECA_NAME_H__ 
#include<iostream>

namespace seneca {
	class Name
	{
		char* m_name{}; // resource
	public:
		// constructor
		Name() = default;
		Name(const char* value);

		// rule of three
		Name(const Name& N); // copy constructor
		Name& operator=(const Name& N); // copy assignment op

		virtual ~Name();

		// methods 
		virtual std::ostream& write(std::ostream& ostr = std::cout) const;
		// Pure virtual function
		virtual std::ostream& call(std::ostream& ostr = std::cout) = 0;
		
	};

	// helper operator
	std::ostream& operator<<(std::ostream& leftOperan, const Name& rightOperan);
}
#endif

