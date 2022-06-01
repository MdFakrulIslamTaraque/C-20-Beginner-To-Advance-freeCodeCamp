#ifndef PERSON_CLASS_H
#define PERSON_CLASS_H

#include<string>
#include<iostream>
class C_Person 
{
protected: //means, we can access these member variables from the derived class and its friend class
	std::string first_name;
	std::string last_name;

	//friend std::ostream& operator<<(std::ostream& out, const C_Person& C_Person);
public:
	C_Person() = default;
	C_Person(std::string first_name_param, std::string last_name_param);
	~C_Person();
	const std::string get_first_name();
	const std::string get_last_name();
	C_Person& set_first_name(std::string first_name_param);
	C_Person& set_last_name(std::string last_name_param);
	void print_person_info();
};

#endif // !PERSON_CLASS_H

