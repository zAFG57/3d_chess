#include "piece.hpp"

using namespace std;

bool piece::is_white() const
{
	if (nb_player%2 == 1) return 1;
	return 0;
}

int piece::who() const
{
	return nb_player;
}
