#include<iostream>


#include "Test_Private_Person.h"

Test_Private_Person :: Test_Private_Person()
{

}

Test_Private_Person :: ~Test_Private_Person()
{

}
void Test_Private_Person::print_Test_private()
{
	/*
	* protected:age --	(private)
	  private: address -- (private)
	  public:full_name -- (private)

	  here the private class elements ca't be accible directly, get error.(Some error happens here :|)
	*/
	std::cout << "Full name form Person(mother class): " << this->full_name << " || age : " << this->age << " || address : " << this->get_person_address()<< std::endl;
}