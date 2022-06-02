#include<iostream>

#include "Person.h"
#include "Test_Private_Person.h"
#include <iostream>

Test_Private_Person :: ~Test_Private_Person()
{
	std::cout << "Test Private Person Destructor\n\n";
}

void Test_Private_Person::print_Test_private()
{
	/*
		* protected:age --	(private)
		  private: address -- (private)
		  public:full_name -- (private)

		  here the private class elements ca't be accible directly, get error.(Some error happens here :|)
		*/

	std::cout << "Inherited Person in Private mode.Full name form Person(mother class): " << this->get_person_full_name() << " || age : " << this->get_person_age() << " || address : " << this->get_person_address() << std::endl;
}
int Test_Private_Person::get_private_int1()
{
	return private_int1;
}