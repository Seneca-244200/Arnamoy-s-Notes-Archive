#ifndef SDDS_MYVECTOR_H__
#define SDDS_MYVECTOR_H__
namespace sdds {
	class MyVector {
	private:
		int* array;
		int size;
		int capacity;

	public:
		MyVector(); // constructor

		~MyVector();  // destructor

		void push_back(int value);

		int* begin();
		int* end();

		// access operator 
		int& operator[] (int index);

		int getSize() const;
	};
}

#endif