#ifndef DEALER_H
#define DEALER_H
#include "coin.h"
using namespace std;

class Dealer 
{
private:
    Coin quarter;
    Coin dime;
    Coin nickel;
    string quarterVal;
    string dimeVal;
    string nickelVal;
public:
    Dealer();
    void tossCoins();
    string getQuarter();
    string getDime();
    string getNickel();
};

#endif