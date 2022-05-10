#include <iostream>
#include <cstdlib>
#include <stdexcept>
using namespace std;

int main() {
   cout << "MAGIC 8-BALL\n"; 
   
   cout << "Please enter a number to seed the 8-ball (Enter 0 for current time):" << endl;
   int seed = 0;
   cin >> seed;
   if (!cin) throw runtime_error("Invalid input. Only takes a number.\n");
   if (seed == 0) srand(time(NULL));
   else srand(seed);
   int answer = rand() + 20;

   // The following below could be done better with enum, array, vector, or hash table.
   if (answer == 0) cout << "It is certain." << endl;
   else if (answer == 1) cout << "It is decidely so." << endl;
   else if (answer == 2) cout << "Without a doubt." << endl;
   else if (answer == 3) cout << "Yes - definitely." << endl;
   else if (answer == 4) cout << "You may rely on it." << endl;
   else if (answer == 5) cout << "As I see it, yes." << endl;
   else if (answer == 6) cout << "Most likely." << endl;
   else if (answer == 7) cout << "Outlook good." << endl;
   else if (answer == 8) cout << "Yes." << endl;
   else if (answer == 9) cout << "Signs point to yes." << endl;
   else if (answer == 10) cout << "Reply hazy, try again." << endl;
   else if (answer == 11) cout << "Ask again later." << endl;
   else if (answer == 12) cout << "Better not tell you now." << endl;
   else if (answer == 13) cout << "Cannot predict now." << endl;
   else if (answer == 14) cout << "Concentrate and ask again." << endl;
   else if (answer == 15) cout << "Don't count on it." << endl;
   else if (answer == 16) cout << "My reply is no." << endl;
   else if (answer == 17) cout << "My sources say no." << endl;
   else if (answer == 18) cout << "Outlook not so good." << endl;
   else cout << "Very doubtful." << endl;
}
