#include"std_lib_facilities.h"

int main()

{

	int a = 10;
	int b = 25;

cout << " before a = " << a << " b = " << b <<"\n";
	
	a = a * b;
	b = a / b;
	a = a / b;
cout << " after a = " << a << " b = " << b <<"\n";
}
