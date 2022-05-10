#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main() {
   int hufflepuff = 0, ravenclaw = 0, slytherin = 0, gryffindor = 0;
   int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0; // Holds answer choice from input

   cout << "THE SORTING HAT QUIZ!" << endl;

   cout << "Q1) When I'm dead, I want people to remember me as: " << endl;
   cout << setw(15) << "1) The Good" << endl;
   cout << setw(16) << "2) The Great" << endl;
   cout << setw(15) << "3) The Wise" << endl;
   cout << setw(15) << "4) The Bold" << endl;

   cin >> ans1;
   if (!cin || ans1 < 1 || ans1 > 4) throw runtime_error("Invalid input! Input must be a number between 1 and 4.\n");
   if (ans1 == 1) hufflepuff++;
   else if (ans1 == 2) slytherin++;
   else if (ans1 == 3) ravenclaw++;
   else if (ans1 == 4) gryffindor++;
   else throw runtime_error("Invalid input!\n");

   cout << "Q2) Dawn or Dusk?" << endl;
   cout << setw(11) << "1) Dawn" << endl;
   cout << setw(11) << "2) Dusk" << endl;
   cin >> ans2;
   if (!cin || ans2 < 1 || ans2 > 2) throw runtime_error("Invalid input! Input must be a number between 1 and 2.\n");
   if (ans2 == 1) {
       gryffindor++;
       ravenclaw++;
    }
   else if (ans2 == 2) {
       slytherin++;
       hufflepuff++;
    }
   else throw runtime_error("Invalid Input!\n");

   cout << "Q3) Which kind of instrument most pleases your ear?" << endl;
   cout << setw(17) << "1) The violin" << endl;
   cout << setw(18) << "2) The trumpet" << endl;
   cout << setw(16) << "3) The piano" << endl;
   cout << setw(15) << "4) The drum" << endl;
   cin >> ans3;
   if (!cin || ans1 < 1 || ans1 > 4) throw runtime_error("Invalid input! Input must be a number between 1 and 4.\n");

   if (ans3 == 1) slytherin++;
   else if (ans3 == 2) hufflepuff++;
   else if (ans3 == 3) ravenclaw++;
   else if (ans3 == 4) gryffindor++;
   else throw runtime_error("Invalid Input!\n");

   cout << "Q4) Which road tempts you most?" << endl;
   cout << setw(34) << "1) The wide, sunny grassy lane" << endl;
   cout << setw(42) << "2) The narrow, dark, lantern-lit alley" << endl;
   cout << setw(51) << "3) The twisting, leaf-strewn path through woods" << endl;
   cout << setw(51) << "4) The cobbled street lined (ancient buildings)" << endl;
   cin >> ans4;
   if (!cin || ans1 < 1 || ans1 > 4) throw runtime_error("Invalid input! Input must be a number between 1 and 4.\n");

   if (ans4 == 1) hufflepuff++;
   else if (ans4 == 2) slytherin++;
   else if (ans4 == 3) gryffindor++;
   else if (ans4 == 4) ravenclaw++;
   else throw runtime_error("Invalid Input!\n");

   string house;
   int max = 0;

   if (gryffindor > max) {
       max = gryffindor;
       house = "Gryffindor";
    }
   if (ravenclaw > max) {
       max = ravenclaw;
       house = "Ravenclaw";
    }
   if (slytherin > max) {
       max = slytherin;
       house = "Slytherin";
    }
   if (hufflepuff > max) {
       max = hufflepuff;
       house = "Hufflepuff";
    }

   cout << house << "!" << endl;
}
