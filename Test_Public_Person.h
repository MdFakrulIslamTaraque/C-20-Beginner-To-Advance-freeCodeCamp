#ifndef TEST_PUBLIC_PERSON_H
#define TEST_PUBLIC_PERSON_H

#include "Person.h"
class Test_Public_Person: public Person
{
	int public_int1{};
	int public_int2{};
	double public_double1;
public:
	Test_Public_Person() = default;
	~Test_Public_Person();
	void print_Test_Public();

};

#endif // !TEST_PUBLIC_PERSON_H

