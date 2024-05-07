#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

#include"Label.h"

namespace seneca {
	Label::Label()
	{
		cout << "DEFAULT" << endl;

	}
	Label::Label(const char* text)
	{
		m_text = new char[strlen(text) + 1];
		strcpy(m_text, text);

		cout << "Created " << text << endl;
	}


	// copy consturtor
	Label::Label(Label& cp)
	{
		operator=(cp.m_text);
	}

	// assingment operator 
	Label& Label::operator=(const char* text)
	{
		cout << "Overloaded = operator called " << endl;
		delete[] m_text;

		if (text) {
			// not nullptr given
			m_text = new char[strlen(text) + 1];
			strcpy(m_text, text);
		}
		else {
			// text == nullptr
			m_text = nullptr;
		}

		return *this;

	}


	Label::~Label()
	{
		cout << "REMOVING " << m_text << endl;
		delete[] m_text;
	}

	// Copy assignent operator
	Label& Label::operator=(Label& RO)
	{
		return operator=(RO.m_text);
	}

	ostream& Label::print(ostream& ostr) const
	{
		return ostr << ">" << (m_text ? m_text : "") << "<" << endl;
	}
	istream& Label::read(istream& istr)
	{
		// Step 1: Read the value given in cin
		char text[1024]; // let's hope the label is not more than 1024 characters

		istr.getline(text, 1024);

		// resuse the assignment operator
		operator=(text);

		return istr;

		
	}
	// Output opeartor
	ostream& operator<<(ostream& ostr, Label& label)
	{
		// TODO: insert return statement here
		return label.print(ostr);
	}
	istream& operator>>(istream& istr, Label& label)
	{
		return label.read(istr);
	}
}