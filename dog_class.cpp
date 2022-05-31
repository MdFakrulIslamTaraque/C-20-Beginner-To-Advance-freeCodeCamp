#ifndef DOG_CLASS_H
#define DOG_CLASS_H
#include "dog_class.h"
#include<iostream>
C_dog::C_dog(std::string name_param, std::string breed_param, int age_param)
{
	name = name_param;
	breed = breed_param;
	age = new int{ age_param };
	std::cout <<name<< "'s Constructor is called" << " at " << this << std::endl;
}
C_dog::~C_dog()
{
	delete age; 
	std::cout << this->name<<" dog class is deleted" << std::endl;
}
C_dog* C_dog::set_name(std::string name)
{
	this->name = name;
	return this;
}
C_dog* C_dog::set_breed(std::string breed)
{
	this->breed = breed;
	return this;
}
C_dog* C_dog::set_age(int age)
{
	*(this->age) = age;
	return this;
}

//-------------------------------by reference-------------------
C_dog& C_dog::set_name2(std::string name)
{
	this->name = name;
	return *(this);
}
C_dog& C_dog::set_breed2(std::string breed)
{
	this->breed = breed;
	return *this;
}
C_dog& C_dog::set_age2(int age)
{
	*(this->age) = age;
	return *this;
}
void C_dog::print_info()
{
	std::cout << "Dog name = " << name << " , breed = " << breed << ", p_age = " << *age << std::endl;
}
#endif // !DOG_CLASS_H