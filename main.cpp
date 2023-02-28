#include "main.hpp"
#include "game.hpp"

using namespace std;


int main()
{
	game g;
	g.add_player();
	g.update_play_ground();
	g.place_piece();
	g.distribute_piece();
	return 0;
}
