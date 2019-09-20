#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>
#include <list> 
#include <iterator> 

#include "card.cpp";

using namespace std;

class Player {
    private:
        string name_;
        list<Card> deck_;
        int health_;
        bool alive_;


    public:
        Player();
        Player(int health) {
            this->health_ = health;
            this->alive_ = true;
            this->deck_ = {};
        }
        int GetHealth() {
            return health_;
        }
        string GetName() {
            return name_;
        }
        list<Card> GetDeck() {
            return deck_;
        }
        bool GetAlive() {
            return alive_;
        }
        void SetHealth(int health) {
            this->health_ = health;
        }
        void SetName(string name) {
            this->name_ = name;
        }
        void Damage(int dmg) {
            this->health_ -= dmg;

            cout << "player" + this->name_ + "took " + to_string(dmg) + " damage!" << endl;
            if (this->health_ < 0) {
                this->alive_ = false;
                cout << "player" + this->name_ + "has been defeated!" << endl;

            }
        }
};