#ifndef GAME_HPP
#define GAME_HPP

using namespace std;

#include<vector>
#include "player.hpp"
#include "square.hpp"

class square;
class player;

class game {
    private:
        vector<square*> play_ground;
        int playground_size[3];
        vector<player*> all_player;
        int turn; //le numéro du joueur qui doit jouer (on avance de un en un dans la liste jusqu'a bouclé sur le 0)
    public:
        game();
        ~game();
	void add_player();
	void update_play_ground();
	void place_piece();
	void distribute_piece();
};

#endif