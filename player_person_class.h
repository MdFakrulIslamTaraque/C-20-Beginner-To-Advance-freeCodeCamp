#ifndef PLAYER_PERSON_CLASS_H
#define PLAYER_PERSON_CLASS_H

#include "person_class.h"
class C_Player:public C_Person
{
	std::string m_game{};
public:
	C_Player() = default;
	C_Player(std::string game_param, std::string first_name_param, std::string last_name_param);
	~C_Player();
	void print_player_info();
};
#endif // !PLAYER_PERSON_CLASS_H

 