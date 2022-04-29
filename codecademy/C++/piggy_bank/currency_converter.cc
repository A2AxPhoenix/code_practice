#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Following variables hold the number of each currency
    double pesos = 0.0, reais = 0.0, soles = 0.0;
    double usDollars = 0.0; 
    cout << "Enter the number of Colombian Pesos: " << endl;
    cin >> pesos;
    if (!cin) { // Catch invlaid inputs 
        cout << "Invalid Input! Not a number!" << endl;
        exit(EXIT_FAILURE); // kill program
    }
    cout << "Enter the number of Brazilian Reais: " << endl;
    cin >> reais;
    if (!cin) {
        cout << "Invalid Input! Not a number!" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Enter the number of Peruvian Soles: " << endl;
    cin >> soles;
    if (!cin) {
        cout << "Invalid Input! Not a number!" << endl;
        exit(EXIT_FAILURE);
    }
    
    // Conversion Rates below:
    double pesosToDollars = 0.049;
    double reaisToDollars = 0.20;
    double solesToDollars = 0.26;

    usDollars = (pesos * pesosToDollars) + (reais * reaisToDollars) + (soles * solesToDollars);

    cout << fixed << setprecision(2);
    cout << "US Dollars: $" << usDollars << endl;
}
