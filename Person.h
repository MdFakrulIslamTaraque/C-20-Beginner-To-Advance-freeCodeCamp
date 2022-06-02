#ifndef PERSON_H
#define PERSON_H

#include<string>
class Person
{
protected:
	int age{10};
private:
	std::string address{"Address-Person-MOther"};
public:
	std::string full_name{"Name-Person-Mother"};

	Person() = default;
	Person(const std::string full_name, int age, const std::string address);
	~Person();

	//getters
	std::string get_person_full_name();
	std::string get_person_address();
	int get_person_age() const;

	//seters
	Person& set_person_full_name(std::string full_name);
	Person& set_person_address(std::string address);
	Person& set_person_age(const int age);

	void print_person_info2();

};

#endif // !PERSON_H

