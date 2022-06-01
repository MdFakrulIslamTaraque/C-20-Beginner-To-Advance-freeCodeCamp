#ifndef TEST_PROTECTED_PERSON_H
#define TEST_PROTECTED_PERSON_H

#include "Person.h"
class Test_Protected_Person : protected Person
{
	int protected_int1{};
	int protected_int2{};
	double protected_double1;
public:
	Test_Protected_Person() = default;
	~Test_Protected_Person();
	void print_Test_Protected();

};

#endif // !TEST_PUBLIC_PERSON_H

