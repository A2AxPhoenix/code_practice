#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
   cout << "Leap Year Checker\n\n";
   cout << "Please enter a year to check: ";
   string s_year = ""; // Holds the string version of the year
   cin >> s_year;
   if (s_year.size() != 4) throw logic_error("Year must be a 4 digit number\n"); 
   
   int i_year = stoi(s_year); // Holds the interger version of the year.
    
   bool isLeapYear = false;
   if (i_year % 4 == 0 && i_year % 100 != 0 || i_year % 400 == 0)
       isLeapYear = true;
   else isLeapYear = false;
   
   if (isLeapYear) cout << i_year << " falls on a leap year!" << endl;
   else cout << i_year << " does not fall on a leap year!" << endl;
}
