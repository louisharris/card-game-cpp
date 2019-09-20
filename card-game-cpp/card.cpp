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
        Card(string name, int attack, int defence) {
            this->name_ = name;
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
        void Damage(int dmg) {
            if (dmg > this->defence_) {
                int damageTaken = dmg-this->defence_;
                this->health_ -= damageTaken;
                cout << this->name_ + "was damaged for " + to_string(damageTaken) + "!" << endl;
            } else {
                cout << this->name_ + "was not affected!" << endl;
            }

            if (this->health_ < 0) {
                this->alive_ = false;
            }
        }
};