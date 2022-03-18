#include <string>
#include <iostream>
#include <vector>
using namespace std;

string likes(const vector<string> &names) {
	if (names.size() == 0) return "no one likes this";
	else if (names.size() == 1) return names.at(0) + " likes this";
	else {
		string retVal;
		if (names.size() == 2) {
			string s = names.at(0) + " and " + names.at(1);
			retVal = s;
		}
		else if (names.size() == 3) {
			string s = names.at(0) + ", " + names.at(1) + ", and " + names.at(2);
			retVal = s;
		}
		else {
			string s = names.at(0) + ", " + names.at(1) + ", and " + (to_string(names.size() - 2)) + " others ";
			retVal = s;
		}
		return retVal + "like this";
	}
}

int main() {
	vector<string> likers = {};
	cout << "Enter names: (done to quit)" << endl;
	string s;
	while (true) {
		cin >> s;
		if (s == "done") break;
		else likers.push_back(s);
	}
	
	cout << likes(likers) << endl;
}
