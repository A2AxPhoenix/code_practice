#include <iostream>
#include <string> // Thank you std library
using namespace std; // Stop yelling at me over stds please

int main() {
  cout << "Welcome to Interplanetary Boxing League!\n";

  cout << "Please enter your weight: " << endl;
  float weight = 0;
  
  cin >> weight;
  // Vet the input. Squirrel doesn't make sense for input
  if (!cin) { 
    cout << "BAD INPUT!\n";
    exit(EXIT_FAILURE);
  }
  //TODO: Probably should put the planets in an enum for readability.
  cout << "Which planet would you like to fight on: \n";
  cout << "1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n"
       << "5. Saturn\n6. Uranus\n7. Neptune\n"
       << "8. Quit" << endl;
  int planet = 0;
  string planetName;
  cin >> planet;
  if (!cin) {
    cout << "BAD INPU!";
    exit(EXIT_FAILURE);
  }
  if (planet >= 8 or planet < 1) exit(EXIT_SUCCESS);
  // Probably would be better to use a data structure to tether the weight conversion to the planet itself.
  // Consider a hash map, list<pair>, or vector<pair>
  // Hash would be the fastest probably O(1) I/S/D
  // Vector would probably be the practical option O(N) S/D and O(1) Insert
  // List has potential O(1) Insert/Delete but O(N) Search
  // However this assignment isn't testing whether I know these yet so why not be a bit basic to ensure I know conditionals.
  if (planet == 1) {
    weight *= 0.38;
    planetName = "Mercury";
  }
  else if (planet == 2) {
    weight *= 0.91;
    planetName = "Venus";
  }
  else if (planet == 3) {
    weight *= 0.38;
    planetName = "Mars";
  }
  else if (planet == 4) {
    weight *= 2.34;
    planetName = "Jupiter";
  }
  else if (planet == 5) {
    weight *= 1.06;
    planetName = "Saturn";
  }
  else if (planet == 6) {
    weight *= 0.92;
    planetName = "Uranus";
  }
  else if (planet == 7) {
    weight *= 1.19;
    planetName = "Neptune";
  }
  else {
    cout << "Quitting...\n";
    exit(EXIT_SUCCESS);
  }
  cout << "Your weight is " << weight << " pounds on " << planetName << endl;
}
