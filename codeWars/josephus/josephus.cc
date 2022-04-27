#include "read.h"
#include <list>
#include <gtest/gtest.h>
using namespace std;

const int MIN_KNIGHTS = 1;

void die() {
	cout << "ERROR" << endl;
	exit(EXIT_FAILURE);
}

string josephus(int knights, int skip) {
	if (knights < MIN_KNIGHTS || skip < 1) return "ERROR";
	list<int> knight_rt;
	int survivor = 0;
	for (int i = 1; i <= knights; i++)
		knight_rt.push_back(i);
	auto it = knight_rt.begin();
	int startKnight = *it + (skip - 1);
	if (skip > knights) startKnight = skip % knights;
	while (*it != startKnight) it++;
	while (knight_rt.size() > 1) {
		if (it == knight_rt.end()) it = knight_rt.begin();
		cerr << "Eliminated knight: " << *it << endl;
		it = knight_rt.erase(it);
		for (int i = 0; i <= skip; i++) {
			if (it == knight_rt.end()) it = knight_rt.begin();
			it++;
		}
	}
	survivor = *knight_rt.begin();
	return to_string(survivor);
}

TEST(Josephus, GoodTests) {
	EXPECT_EQ(josephus(7, 3), "4");
	EXPECT_EQ(josephus(11, 19), "10");
	EXPECT_EQ(josephus(1, 300), "0");
	EXPECT_EQ(josephus(14, 2), "13");
	EXPECT_EQ(josephus(100, 1), "99");
}
TEST(Josephus, BadTests) {
	EXPECT_EQ(josephus(0, 0), "ERROR");
	EXPECT_EQ(josephus(1, 0), "ERROR");
	EXPECT_EQ(josephus(-1, -2), "ERROR");
}
TEST(Josephus, EdgeTests) {
	EXPECT_EQ(josephus(2, 1), "0");
}

int main(int argc, char** argv) {
		testing::InitGoogleTest(&argc, argv);
	#ifndef FOO
		// Require people who compile the code to use "make"
		static_assert(false, "Type \"make\" to build, not g++");
	#endif
	cout << "Welcome to Josephus Simulator! Choose from one of the following options:\n";
	cout << "test - will run the test suite\n";
	cout << "run  - will run josephus on custom inputs\n";
	string s;
	getline(cin, s);
	if (s == "test") return RUN_ALL_TESTS();
	else if (s == "run") {
		int knights = read("Please enter how many knights are standing in a circle (min 1):\n");
		int skip = read("Please enter how many knights to skip after one knight is eliminated (min 1):\n");
		string winner = josephus(knights, skip);
		cout << winner << endl;
	}
	else {
		cout << "ERROR" << endl;
		exit(EXIT_FAILURE);
	}
}
