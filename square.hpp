#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "piece.hpp"

class piece;

class square{
    private:
        bool danger_white;
        bool danger_black;
        piece *p;
    public:
        square();
        ~square();
        bool is_danger_white() const;
        bool is_danger_black() const;
        bool is_empty() const;
	void set_danger_white(bool d);
        void set_danger_black(bool d);
	void set_to_empty();
	piece* get_piece() const;
	void set_piece(piece* p);
};

#endif