#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

#include "player.cpp";

using namespace std;

class Board {
    private:
        Player players_[2];

    public:
        Board() {
            Player p1 = Player(30);
            Player p2 = Player(30);
            this->players_[0] = {p1};
            this->players_[1] = {p2};
        }
        
        Player * GetPlayers() {
            return this->players_;
        }

        void SetPlayers(Player p1, Player p2) {
            this->players_[0] = {p1};
            this->players_[1] = {p2};
        }

};