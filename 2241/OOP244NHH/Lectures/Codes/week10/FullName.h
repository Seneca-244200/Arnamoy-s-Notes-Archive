#ifndef SENECA_FULLNAME_H__
#define SENECA_FULLNAME_H__
#include<iostream>

#include "Name.h"
using namespace std;
namespace seneca {
	class FullName : public Name
	{
		char* m_lastName{};
	public:
		FullName() = default;
		// The following cons works as both single
		// and two arg constructor
		FullName(const char* firstname, const char* lastname = nullptr);

		// Rule of three
		FullName(const FullName& FN); // copy constructor
		FullName& operator=(const FullName& FN); // copy assignment

		virtual ~FullName();

		virtual std::ostream& write(std::ostream& ostr = std::cout) const;


	};
}

#endif

