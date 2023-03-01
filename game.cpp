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
	for (int i=0; i<x*64;i++) 
	{
		play_ground.push_back(new square);
		cout << i << endl;
	}
}

void game::place_piece()
{
	for (int i=0; i<playground_size[0]; i++)
	{
		distribute_piece(i,0,new rock);
		distribute_piece(i,7,new rock);
		distribute_piece(i,56,new rock);
		distribute_piece(i,63,new rock);

		distribute_piece(i,1,new knight);
		distribute_piece(i,6,new knight);
		distribute_piece(i,57,new knight);
		distribute_piece(i,62,new knight);

		distribute_piece(i,2,new bishop);
		distribute_piece(i,5,new bishop);
		distribute_piece(i,58,new bishop);
		distribute_piece(i,61,new bishop);

		distribute_piece(i,4,new king);
		distribute_piece(i,60,new king);

		distribute_piece(i,5,new queen);
		distribute_piece(i,59,new queen);

		distribute_piece(i,8,new pawn);
		distribute_piece(i,9,new pawn);
		distribute_piece(i,10,new pawn);
		distribute_piece(i,11,new pawn);
		distribute_piece(i,12,new pawn);
		distribute_piece(i,13,new pawn);
		distribute_piece(i,14,new pawn);
		distribute_piece(i,15,new pawn);

		distribute_piece(i,55,new pawn);
		distribute_piece(i,54,new pawn);
		distribute_piece(i,53,new pawn);
		distribute_piece(i,52,new pawn);
		distribute_piece(i,51,new pawn);
		distribute_piece(i,50,new pawn);
		distribute_piece(i,49,new pawn);
		distribute_piece(i,48,new pawn);
	}
}


void game::distribute_piece(int i, int p, piece *piece)
{
	piece->update_coordonate(i,p/8,p%8);
	play_ground[i*64+p]->set_piece(piece);
	if (p>=32) all_player[i*2+1]->add_piece(piece);
	else all_player[i*2]->add_piece(piece);
}
