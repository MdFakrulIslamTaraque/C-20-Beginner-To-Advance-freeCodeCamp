#include<string>
class C_dog
{
	std::string name;
	std::string breed;
	int* age{ nullptr };
public:
	C_dog() = default;
	C_dog(std::string name_param, std::string breed_param, int age_param);
	~C_dog();
	C_dog* set_name(std::string name);
	C_dog* set_breed(std::string breed);
	C_dog* set_age(int age);

	C_dog& set_name2(std::string name);
	C_dog& set_breed2(std::string breed);
	C_dog& set_age2(int age);
	void print_info();
};


