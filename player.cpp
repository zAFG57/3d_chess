#include "player.hpp"


player::player(int nb_player, string name): name{name}, nb_player{nb_player} {}
player::~player()
{
	for (int i=0; i< (int) every_piece.size(); i++) delete every_piece[i];
	every_piece.clear();
}


string player::get_name() const
{
	return name;
}

void player::set_name(string name)
{
	name = name;
}

void player::add_piece(piece* p)
{
    every_piece.push_back(p);
}

void player::del_piece(piece* p)
{
	//faux mais raf
	every_piece.pop_back();
}
