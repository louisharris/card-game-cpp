#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>
using namespace std;

class Card {
    private:
        string name_;
        int attack_;
        int defence_;
        int health_;
        bool alive_;

    public:
        Card();
        Card(int attack, int defence) {
            this->attack_ = attack;
            this->defence_ = defence;
            this->health_ = defence;
            this->alive_ = true;
        }
        string GetName() {
            return name_;
        }
        int GetAttack() {
            return attack_;
        }
        int GetDefence() {
            return defence_;
        }
        int GetHealth() {
            return health_;
        }
        void SetAttack(int attack) {
            this->attack_ = attack;
        }
        void SetDefence(int defence) {
            this->defence_ = defence;
        }
        void SetHealth(int health) {
            this->health_ = health;
        }
        void Damage(int attack) {
            this->health_ -= attack;

            if (this->health_ < 0) {
                this->alive_ = false;
            }
        }
};