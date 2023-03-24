#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <numeric>
using namespace std;

class Warrior {
    private:
        int maxAttack;
        int maxDefense;
    public:
        string name;
        int health;
        Warrior(string name, int health, int attack, int defense) {
            this->name = name;
            this->health = health;
            this->maxAttack = attack;
            this->maxDefense = defense;
        }
        // Random value up to maxAttack (from 1 to 'maxAttack')
        int attack() {
            return rand() % this->maxAttack;
        }
        int defend() {
            return rand() % this->maxDefense;
        }
};
class Battle {
    public:
        static string getAttackResult(Warrior& w1, Warrior& w2) {
            int w1AttackAmt = w1.attack();
            int w2BlockAmt = w2.defend();
            int damage = max(0, w1AttackAmt - w2BlockAmt);
            w2.health = (w2.health - damage) < 0 ? 0 : w2.health - damage;
            cout << w1.name << " attacks " << w2.name << " and deals " << damage << " damage" << endl;
            cout << w2.name << " is down to " << w2.health << " health" << endl;
            if (w2.health <= 0) {
                cout << w2.name << " has died and " << w1.name << " is victorious" << endl;
                return "Game Over";
            } 
            else {
                return "Fight Again";
            }
        }
        static void startFight(Warrior& w1, Warrior& w2) {
            while (true) {
                if (Battle::getAttackResult(w1, w2).compare("Game Over") == 0) {
                    cout << "Game Over" << endl;
                    break;
                }
                if (Battle::getAttackResult(w2, w1).compare("Game Over") == 0) {
                    cout << "Game Over" << endl;
                    break;
                }
            }
        }
};

int main() {
    srand(time(NULL));
    Warrior thor("Thor", 100, 30, 15);
    Warrior hulk("Hulk", 150, 25, 10);

    // start the battle
    Battle::startFight(thor, hulk);

    return 0;
}