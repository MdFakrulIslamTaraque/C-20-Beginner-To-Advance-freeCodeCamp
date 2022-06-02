#include<iostream>

#include "Test_Public_Person.h"

Test_Public_Person :: ~Test_Public_Person()
{

}
void Test_Public_Person::print_Test_Public()
{
	/*
	* protected:age -- (protected)
	  private: address -- (private)
	  public:full_name -- (public)

	  here the private class element 'address' can't be accessed directly, that's why we needed a getter
	*/
	std::cout << "Full name form Person(mother class): " << this->full_name << " || age : " << this->age << " || address : " << this->get_person_address() << std::endl;
}