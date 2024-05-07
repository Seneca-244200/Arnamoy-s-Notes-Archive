#ifndef SENECA_LABEL_H__
#define SENECA_LABEL_H__
namespace seneca {
	class Label {
		char* m_text{};

	public:
		// constructors
		Label();
		Label(const char* text);

		// copy constructor
		Label(Label& cp);
		// Label(Label& cp) = delete;  // disable stuff like "Label N = L;"

		// Assignment operator =
		Label& operator=(const char* text);


		// destructor
		~Label();

		// override explicit opy assignment operator
		Label& operator=(Label &RO);
		//Label& operator=(Label& RO) = delete; disabling stuff like "N = L;"


		ostream& print(ostream& ostr = cout)  const;
		istream& read(istream& istr = cin);

	};

	// Helper operators for input and output
	ostream& operator<<(ostream& ostr, Label& label);
	istream& operator>>(istream& istr, Label& label);
}
#endif