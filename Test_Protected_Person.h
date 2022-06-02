#ifndef TEST_PROTECTED_PERSON_H
#define TEST_PROTECTED_PERSON_H

#include "Person.h"
class Test_Protected_Person : protected Person
{
	int protected_int1{10};
	int protected_int2{20};
	double protected_double1{ 10.10 };
public:
	Test_Protected_Person() = default;
	~Test_Protected_Person();
	void print_Test_Protected();

};

#endif // !TEST_PROTECTED_PERSON_H

