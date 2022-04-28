#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // x = -b +- sqrt(b^2 - 4ac) / 2a
   double a = 0.0, b = 0.0, c = 0.0; // Variables for the formula
   cout << "Enter a: \n";
   cin >> a;
   if (!cin) {
       cout << "Invalid Number!" << endl;
       exit(EXIT_FAILURE);
    }
   cout << "Enter b: \n";
   cin >> b;
   if (!cin) {
       cout << "Invalid Number!" << endl;
       exit(EXIT_FAILURE);
    }
   cout << "Enter c: \n";
   cin >> c;
   if (!cin) {
       cout << "Invalid Number!" << endl;
       exit(EXIT_FAILURE);
    }

   double root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
   double root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    
   cout << "Root 1 is " << root1 << endl;
   cout << "Root 2 is " << root2 << endl;
}
