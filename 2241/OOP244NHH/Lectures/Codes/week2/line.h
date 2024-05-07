#ifndef SDDS_LINE_H__
#define SDDS_LINE_H__
namespace sdds {
	void line(char fill='&', int length=10);
	//void line(char fill);  // Declaration can be avoided by setting the default value of the
							 // second argument of the above funtion.
	
	void line(int length);   // CANNOT be avoided.  If avoided, the first argument given aka
							 // length will be converted to the ASCII character (that length
							 // represents, and a line of size 10 will be drawn for the character.
							 // We do not want that.
	
	//void line();           // Declaration can be avoided by setting the default value of the
							 // BOTH arguments of the first line() funtion.


}
#endif