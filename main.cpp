
#include <iostream>
#include <iomanip>
#include "dealer.h"
#include "player.h"
using namespace std;

void setGame(Player& player, int& round, bool& playAgain);
void viewBalanceOption(Player player);
void roundResults(Dealer& dealer, Player& player);
void finalResult(Player player);

int main() {
    string playerName;
    bool playAgain = false;
    char again;
    int round;
    
    cout << "Enter player name: ";
    cin >> playerName;
    
    Player player1(playerName);
    Dealer dealer;
    
    do {
        setGame(player1, round, playAgain);
        
        while(player1.getBalance() < 1.0)
        {
            cout << "_______________________" << endl;
            cout << "Now playing round " << round << endl;
            cout << "......................." << endl;
            round++;
            
            dealer.tossCoins();
            roundResults(dealer, player1);
        }
        
        finalResult(player1);

        cout << "Enter \"Y\" to play again." << endl;
        cin >> again;
        if ( again == 'Y' || again == 'y')
        {
            playAgain = true;
        }
    
    } while(playAgain);
    cout << "GoodBye!" << endl;
    
    return 0;
}

void setGame(Player& player, int& round, bool& playAgain) 
{
    playAgain = false;
    round = 1;
    player.newGame();
}

void viewBalanceOption(Player player1)
{
    char view = 'y';
    int viewed = 0;
    while (viewed == 0)
    {
        cout << "Enter \"B\" to view current balance or enter anything else to continue to the next round: ";
        cin >> view;
        if (view == 'B' || view == 'b')
        {
            cout << "......................." << endl;
            cout << "Your current balance is: $" << fixed << setprecision(2) << player1.getBalance() << endl;
            viewed = 1;
        }
        else 
        {
            viewed = 2;
        }
    }
    if (viewed == 1)
    {
        cout << "Enter anything to continue." << endl;
        cin >> view;
    }
}

void roundResults(Dealer& dealer, Player& player)
{
    double total = 0;
    
    cout << "Now revealing coins: " << endl;
    cout << "Quarter: " << dealer.getQuarter() << endl;
    cout << "Dime: " << dealer.getDime() << endl;
    cout << "Nickel: " << dealer.getNickel() << endl;
    cout << "......................." << endl;
    
    if (dealer.getQuarter() == "Heads") {
        total += .25;
    }
    if (dealer.getDime() == "Heads") {
        total += .10;
    }
    if (dealer.getNickel() == "Heads") {
        total += .05;
    }
    
    cout << "$" <<  fixed << setprecision(2) << total << " will be added to " << player.getName() << "'s balance." << endl;
    player.addBalance(total);
    viewBalanceOption(player);
}

void finalResult(Player player)
{
    cout << "_______________________" << endl;
    cout << "Your final balance is: $" << fixed << setprecision(2) << player.getBalance() << endl;
    
    if (player.getBalance() == 1)
    {
        cout << "Congratulations You Win!!!!!!!" << endl;
    }
    else
    {
        cout << "You Have Lost!!!!!!!" << endl;
    }
    
    cout << "_______________________" << endl;    
}
