#ifndef NESTED_PRIVATE
#define NESTED_PRIVATE
#include "Test_Private_Person.h"
#include<iostream>
class Nested_Private_Class:public Test_Private_Person
{
public:
	Nested_Private_Class() = default;
	~Nested_Private_Class();
	void edit_from_nested_private();
};
#endif // !NESTED_PRIVATE

