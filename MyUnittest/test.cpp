#include "pch.h"
#include "../MyProject/SimilarityChecker1.cpp"

using namespace std;

TEST(StringCheckerTest, SameLength) {
	LengthCalculator testunit{};
	string a = "AAACC";
	string b = "AAACA";

	int expected = 60;

	EXPECT_EQ(expected, testunit.calculateLengthDiff(a, b));
}

TEST(StringCheckerTest, DiffLength) {
	LengthCalculator testunit{};
	string a = "AA";
	string b = "BBB";

	int expected = 40;

	EXPECT_EQ(expected, testunit.calculateLengthDiff(a, b));
}