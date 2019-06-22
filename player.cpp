#include "player.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Player::Player(string playerName)
{
    srand(time(0));
    name = playerName;
    balance = 0.0;
}

void Player::addBalance(double newBalance)
{
    balance += newBalance;
}

void Player::newGame()
{
    balance = 0.0;
}

string Player::getName()
{
    return name;
}

double Player::getBalance()
{
    return balance;
}