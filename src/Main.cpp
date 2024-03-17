#include <iostream>
#include "cBField.h"

int main() 
{
	
	hfld::Methods test(100,1000,0.1,hfld::pi/1000.);

	test.by_vector_differential();

	return 0;
}