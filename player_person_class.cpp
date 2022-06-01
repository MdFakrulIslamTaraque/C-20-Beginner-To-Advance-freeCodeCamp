#include<iostream> 

#include "person_class.h"
#include "player_person_class.h"

C_Player::C_Player(std::string game_param, std::string first_name_param, std::string last_name_param)
{
	this->m_game = game_param;
	this->first_name = first_name_param;
	this->last_name = last_name_param;
}

C_Player::~C_Player()
{
	std::cout << m_game << " 's player class destructor\n\n";
}
void C_Player::print_player_info()
{
	std::cout << "Player first name: " << this->get_first_name() << " || second name: " << this->get_last_name() << " || player game : " << this->m_game << std::endl;
}