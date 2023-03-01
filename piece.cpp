#include "piece.hpp"

using namespace std;

piece::piece(int a, int b, int c): coordonate{a,b,c} {}

bool piece::is_white() const
{
	if (nb_player%2 == 1) return 1;
	return 0;
}

int piece::who() const
{
	return nb_player;
}

void piece::update_coordonate(int a, int b, int c)
{
	coordonate[0] = a;
	coordonate[1] = b;
	coordonate[2] = c;
}