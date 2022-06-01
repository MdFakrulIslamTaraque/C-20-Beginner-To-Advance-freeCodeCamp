#ifndef TEST_PRIVATE_PERSON_H
#define TEST_PRIVATE_PERSON_H

#include "Person.h"
class Test_Private_Person : private Person
{
	int private_int1{10};
	int private_int2{20};
	double private_double1{ 20.10 };
public:
	Test_Private_Person() = default;
	~Test_Private_Person();
	void print_Test_private();

};

#endif // !TEST_PROTECTED_H