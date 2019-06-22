#include "coin.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Coin::Coin() 
{ 
    int x = rand() % 2;
    if (x == 0) {
        sideup = "Tails";
    }
    else {
        sideup = "Heads";
    }
}
        
void Coin::toss() 
{ 
    int x = rand() % 2;
    if (x == 0) {
        sideup = "Tails";
    }
    else {
        sideup = "Heads";
    }
}
        
        
string Coin::getSideUp()
{
    return sideup;
}
