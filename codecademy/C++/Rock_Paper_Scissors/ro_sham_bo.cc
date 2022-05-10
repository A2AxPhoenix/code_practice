#include <iostream>
#include <cstdlib>
#include <stdexcept>
using namespace std;

int main() {

    /*
     * Ideas to make this better:
     *  1. Use a loop to make it towards you can play as many times against the AI as you want.
     *  2. Make it towards two people can play against each other.
     */

    cout << "ROCK PAPER SCISSOR LIZARD SPOCK!\n" << endl;
    
    cout << "Please enter a seed for the Random Number Generator (Enter 0 for current time): " << endl;
    int seed = 0;
    cin >> seed;
    if (!cin) throw runtime_error("Invalid input. Input must be a number.\n");
    if (seed == 0) srand(time(NULL));
    else srand(seed);

    int computer = rand() % 5 + 1;
    int user = 0;
    
    // RPSLSP = Rock Paper Scissors Lizard SPock
    enum RPSLSP { ROCK = 1, PAPER, SCISSORS, LIZARD, SPOCK };

    cout << "====================\n";
 
    cout << "1) ✊\n";
    cout << "2) ✋\n";
    cout << "3) ✌️\n";
    cout << "4) 🦎\n";
    cout << "5) 🖖\n";
 
    cout << "====================\n";
    cout << "Shoot!" << endl;
    cin >> user;

    bool userWin = false;
    if (!cin || user < 1 || user > 5) throw runtime_error("Invalid input. Input must be a number between 1 and 5.\n");
    //          Rock crushes Lizard                      Rock crushes Scissors
    if ((computer == ROCK && user == LIZARD) || (computer == ROCK && user == SCISSORS)) userWin = false;
    //          Paper covers Rock                        Paper disproves Spock
    else if ((computer == PAPER && user == ROCK) || (computer == PAPER && user == SPOCK)) userWin = false;
    //          Scissors cut Paper                       Scissors decapitate Lizard 
    else if ((computer == SCISSORS && user == PAPER) || (computer == SCISSORS && user == LIZARD)) userWin = false;
    //          Lizard poisons Spock                     Lizard eats Paper
    else if ((computer == LIZARD && user == SPOCK) || (computer == LIZARD && user == PAPER)) userWin = false;
    //          Spock smashes Scissors                   Spock vaporizes Rock
    else if ((computer == SPOCK && user == SCISSORS) || (computer == SPOCK && user == ROCK)) userWin = false;
    // If the conditions above aren't met, the user wins every time.
    else userWin = true;
    
    // For testing and transperency to the user
    if (computer == ROCK) cout << "Computer chose Rock." << endl;
    if (computer == PAPER) cout << "Computer chose Paper." << endl;
    if (computer == SCISSORS) cout << "Computer chose Scissors." << endl;
    if (computer == LIZARD) cout << "Computer chose Lizard." << endl;
    if (computer == SPOCK) cout << "Computer chose Spock." << endl;
    
    // Handle ties
    if (computer == user) {
        userWin = false;
        cout << "It's a tie!" << endl;
        return 0;
    }

    if (userWin) cout << "You Win!" << endl;
    else cout << "You Lose!" << endl;
}
