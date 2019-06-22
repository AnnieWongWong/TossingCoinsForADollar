#include "dealer.h"
#include "coin.h"
using namespace std;

class Coin;

Dealer::Dealer()
{
    quarterVal = "Tails";
    dimeVal = "Tails";
    nickelVal = "Tails";
}

void Dealer::tossCoins()
{
    quarter.toss();
    dime.toss();
    nickel.toss();
    
    quarterVal = quarter.getSideUp();
    dimeVal = dime.getSideUp();
    nickelVal = nickel.getSideUp();
}

string Dealer::getQuarter()
{
    return quarterVal;    
}

string Dealer::getDime()
{
    return dimeVal;    
}

string Dealer::getNickel()
{
    return nickelVal;    
}
