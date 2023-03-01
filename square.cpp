#include "square.hpp"
using namespace std;

square::square(): danger_white{false}, danger_black{false} {}

square::~square() {}

bool square::is_danger_white() const
{
    return danger_white;
}

bool square::is_danger_black() const
{
    return danger_black;
}

bool square::is_empty() const
{
	if (p == nullptr) return true;
	return false;
}

void square::set_danger_white(bool d)
{
    danger_white = d;
}

void square::set_danger_black(bool d)
{
    danger_black = d;
}

void square::set_to_empty()
{
	p = nullptr;
}

piece* square::get_piece() const
{
	return p;
}

void square::set_piece(piece* p)
{
	p = p;
}
