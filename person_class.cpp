#include "person_class.h"
C_Person::C_Person(std::string first_name_param, std::string last_name_param)
{
	this->first_name = first_name_param;
	this->last_name = last_name_param;
}
C_Person::~C_Person()
{
	std::cout << first_name<< " 'C_person object deleted\n\n";
}
const std::string C_Person::get_first_name()
{
	return first_name;
}

const std::string C_Person::get_last_name()
{
	return last_name;
}

C_Person& C_Person::set_first_name(std::string first_name_param)
{
	this->first_name = first_name_param;
	return *(this);
}

C_Person& C_Person::set_last_name(std::string last_name_param)
{
	this->last_name = last_name_param;
	return *(this);
}
void C_Person::print_person_info()
{
	std::cout << "Person First Name = " << first_name << " || Person Last name = " << last_name << std::endl;
}
