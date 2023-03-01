#ifndef piece_HPP
#define piece_HPP


#include"game.hpp"
using namespace std;

class piece {
    private:
        int nb_player;
        int coordonate[3];
    public:
        piece(int a=0, int b=0, int c=0);
        bool is_white() const;
        int who() const;
        void update_coordonate(int a, int b, int c);
};

class king : public piece {
    private:
        bool as_move;
        int move[26][3] =  
            {
            {0,0,1},{0,1,0},{0,1,1},{1,0,0},{1,0,1},{1,1,0},{1,1,1},
            {0,-1,1},{0,1,-1},{-1,0,1},{1,0,-1},{-1,1,0},{1,-1,0},
            {-1,1,1},{1,-1,1},{1,1,-1},{-1,-1,1},{-1,1,-1},{1,-1,-1},
            {0,0,-1},{0,-1,0},{0,-1,-1},{-1,0,0},{-1,0,-1},{-1,-1,0},{-1,-1,-1}
            };
};

class queen : public piece {
    private:
        int move[18][3] = 
        {
            // répéter chaque int [3] jusqu'a un mur ou un enemi
            {1,1,0},{1,-1,0},{-1,1,0},{-1,-1,0},
            {1,0,1},{1,0,-1},{-1,0,1},{-1,0,-1},
            {0,1,1},{0,1,-1},{0,-1,1},{0,-1,-1},
            {1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}
        };
};

class knight : public piece {
    private:
        int move[24][3] = 
        {
            {0,2,1},{0,2,-1},{1,2,0},{-1,2,0},
            {0,-2,1},{0,-2,-1},{1,-2,0},{-1,-2,0},
            {0,1,2},{0,-1,2},{1,0,2},{-1,0,2},
            {0,1,-2},{0,-1,-2},{1,0,-2},{-1,0,-2},
            {2,1,0},{2,-1,0},{2,0,1},{2,0,-1},
            {-2,1,0},{-2,-1,0},{-2,0,1},{-2,0,-1}
        };
};

class pawn : public piece {
    private:
        bool as_move;
        int move[1][3] = {{0,0,1}};
        int eating_move[4][3] = {{0,1,1},{0,-1,1},{1,0,1},{-1,0,1}};
};

class bishop : public piece {
    private:
        int move[12][3] = 
        {
            // répéter chaque int [3] jusqu'a un mur ou un enemi
            {1,1,0},{1,-1,0},{-1,1,0},{-1,-1,0},
            {1,0,1},{1,0,-1},{-1,0,1},{-1,0,-1},
            {0,1,1},{0,1,-1},{0,-1,1},{0,-1,-1}
        };
};

class rock : public piece {
    private:
        bool as_move;
        int move[6][3] = {{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}}; // répéter chaque int [3] jusqu'a un mur ou un enemi
};

#endif