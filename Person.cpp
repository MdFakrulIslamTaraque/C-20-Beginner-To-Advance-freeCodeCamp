#include<iostream>

#include "Person.h"

Person::Person(const std::string full_name, int age, const std::string address)
{
	this->full_name = full_name;
	this->age = age;
	this->address = address;
}
Person::~Person()
{
	std::cout << "Destructor from Person Class- " << this->full_name << "'s\n\n";
}
std::string Person::get_person_full_name()
{
	return this->full_name;
}
std::string Person::get_person_address()
{
	return this->address;
}
int Person::get_person_age() const
{
	return this->age;
}


Person& Person::set_person_full_name(std::string full_name)
{
	this->full_name = full_name;
	return *this;
}
Person& Person::set_person_address(std::string address)
{
	this->address = address;
	return *this;
}
Person& Person::set_person_age(const int age)
{
	this->age = age;
	return *this;
}
void Person::print_person_info2()
{
	std::cout << "Person full_name: " << get_person_full_name() << " || age: " << get_person_age() << " || address: " << get_person_address() << std::endl;
}