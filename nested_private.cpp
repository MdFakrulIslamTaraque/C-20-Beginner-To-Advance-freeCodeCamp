#include "nested_private.h"
#include<iostream>

Nested_Private_Class::~Nested_Private_Class()
{
	std::cout << "Destructor Nested Private\n\n";
}
void Nested_Private_Class::edit_from_nested_private()
{
	std::cout << "From Nested Private class : " << get_private_int1()<<" || full_name : " <<get_person_full_name()<< std::endl;
}