#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player
{
private:
    string name;
    double balance;
public:
    Player(string);
    void newGame();
    void addBalance(double);
    string getName();
    double getBalance();
};

#endif