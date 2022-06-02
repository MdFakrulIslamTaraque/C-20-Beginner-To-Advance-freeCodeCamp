#ifndef TEST_PRIVATE_PERSON_H
#define TEST_PRIVATE_PERSON_H

#include "Person.h"
#include<string>
class Test_Private_Person : private Person
{
	int private_int1{10};
	int private_int2{20};
	double private_double1{ 20.10 };
public:
	Test_Private_Person() = default;
	~Test_Private_Person();
	void print_Test_private();
	int get_private_int1();
protected:
	using Person::get_person_full_name;
	using Person:: get_person_address;
	using Person::get_person_age;

};

#endif // !TEST_PRIVATE_H