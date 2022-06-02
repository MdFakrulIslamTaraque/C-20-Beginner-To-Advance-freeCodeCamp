#include<iostream>

#include "Test_Protected_Person.h"

Test_Protected_Person :: ~Test_Protected_Person()
{
	std::cout << "Test Protected Person Destructor\n\n";
}
void Test_Protected_Person::print_Test_Protected()
{
	/*
	* protected:age -- (protected)
	  private: address -- (private)
	  public:full_name -- (protected)

	  here the private class element 'address' can't be accessed directly, that's why we needed a getter
	  and the others are protected, and that's why, they were accesible from this derived class
	*/
	std::cout << "Inherited Person in Protected mode.Full name form Person(mother class): " << this->full_name << " || age : " << this->age << " || address : " <<this->get_person_address()<< std::endl;
}