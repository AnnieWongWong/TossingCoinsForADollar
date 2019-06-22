#ifndef COIN_H
#define COIN_H
#include <string>
using namespace std;

class Coin
{
private:
    std::string sideup;
public:
    Coin();
    void toss();
    std::string getSideUp();
};

#endif