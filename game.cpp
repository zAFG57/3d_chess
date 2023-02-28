#include "game.hpp"

game::game(): playground_size{0,8,8} {}
game::~game()
{
	for (int i=0; i< (int) all_player.size(); i++) delete all_player[i];
	all_player.clear();
}

void game::add_player()
{
	string name;
	int a = 1;
	int nb_player = 1;
	while (a == 1)
	{
		cout << "what is your nickname: ";
		cin >> name;
		all_player.push_back(new player{nb_player,name});
		nb_player ++;
		cout << "do you want to add another player ? (0..1): ";
		scanf("%d",&a);
	}
}

void game::update_play_ground()
{
	int n = all_player.size();
	int x = n/2+(n/2.0-n/2)*2;
	playground_size[0] = x;
	playground_size[1] = 8;
	playground_size[2] = 8;
	for (int i=0; i<x*64;i++) play_ground.push_back(new square);
}

void game::place_piece()
{
	for (int i=0; i<playground_size[0]; i++)
	{
		play_ground[i*64]->set_piece(new rock);
		play_ground[i*64+7]->set_piece(new rock);
		play_ground[i*64+56]->set_piece(new rock);
		play_ground[i*64+63]->set_piece(new rock);

		play_ground[i*64+1]->set_piece(new knight);
		play_ground[i*64+6]->set_piece(new knight);
		play_ground[i*64+57]->set_piece(new knight);
		play_ground[i*64+62]->set_piece(new knight);

		play_ground[i*64+2]->set_piece(new bishop);
		play_ground[i*64+5]->set_piece(new bishop);
		play_ground[i*64+58]->set_piece(new bishop);
		play_ground[i*64+61]->set_piece(new bishop);

		play_ground[i*64]->set_piece(new king); // jsp les coordonné
		play_ground[i*64]->set_piece(new king); // il faudra faire gaffe 

		play_ground[i*64]->set_piece(new queen);
		play_ground[i*64]->set_piece(new queen);

	}
}

void game::distribute_piece()
{

}