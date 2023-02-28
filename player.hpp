#ifndef PLAYER_HPP
#define PLAYER_HPP

#include<vector>
#include<iostream>
#include "piece.hpp"

using namespace std;

class piece;

class player {
    private:
        vector<piece> every_piece;
	string name;
	int nb_player;
    public:
        player(int nb_player, string name="player");
        ~player();
        void add_piece(piece p);
        void del_piece(piece p);
	string get_name() const;
	void set_name(string name);
};

#endif