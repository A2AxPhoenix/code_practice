#include <iostream>
using namespace std;

int main() {
    int dogAge = 3; // Holds the value of the dog's age
    int earlyYears = 21; // The first two years of a dog's life counts as 21 human years.
    int laterYears = (dogAge - 2) * 4; // Each year following counts as 4 human years.
    int humanYears = earlyYears + laterYears; // The early and later years make up the total human years.

    cout << "My name is Arya! Ruff ruff, I am " << humanYears << " years old in human years." << endl;
}
