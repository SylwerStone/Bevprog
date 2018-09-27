#include "std_lib_facilities.h"

int main() 

{
	int a = 4;
	int b = 6;

cout << " before a = " << a << "  b = "<< b << "\n";
	
	a = a^b;
	b = b^a;
	a = a^b;

cout << " after a = " << a << "  b = "<< b << "\n";
}
