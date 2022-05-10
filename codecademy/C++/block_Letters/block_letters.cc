#include <iostream>
using namespace std;

int main() {

    /* Ideas and Observations:
     * Store all the block letters into a vector, list, or BST.
     * Receive input from the user that will output a word they selected in block letter
     * format. 
     * If vector, time complexity would probably be O(N) since it is going to be searching and printing/
     * If List, time complexity would be O(1) to insert, however, I'd still need to print it so O(N) because traversing
     * If BST, time complexity may be O(logN) to insert and search which may make it the quickest data structure to keep
     * each string in.
     *
     */
	cout << "JJJJJ    W   W    M   M" << endl;
	cout << "  J      W   W    MM MM" << endl;
	cout << "  J      W   W    MM MM" << endl;
	cout << "  J      W W W    M M M" << endl;
	cout << "J J      WW WW    M   M" << endl;
	cout << "J J      WW WW    M   M" << endl;
	cout << " JJ      W   W    M   M" << endl;
}
