#include "pch.h"
#include "../MyProject/SimilarityChecker1.cpp"

TEST(StringCheckerTest, SameLength) {
    StringChecker checker;
    std::string strA = "ABC";
    std::string strB = "ABC";
    double expectedScore = 60.0;

    double score = checker.checkStringLength(strA, strB);
    EXPECT_DOUBLE_EQ(score, expectedScore);
}

TEST(StringCheckerTest, DifferentLength) {
    StringChecker checker;
    std::string strA = "ABBA";
    std::string strB = "ABB";
    double expectedScore = 26.25;

    double score = checker.checkStringLength(strA, strB);
    EXPECT_DOUBLE_EQ(score, expectedScore);
}