#include "pch.h"
#include "../MyProject/SimilarityChecker1.cpp"

TEST(CheckStringLengthTest, SameLength) {
    std::string strA = "Hello";
    std::string strB = "World";
    double expectedScore = 60.0;

    double score = checkStringLength(strA, strB);
    EXPECT_DOUBLE_EQ(score, expectedScore);
}

TEST(CheckStringLengthTest, DifferentLength) {
    std::string strA = "OpenAI";
    std::string strB = "GPT-3";
    double expectedScore = 26.25;

    double score = checkStringLength(strA, strB);
    EXPECT_DOUBLE_EQ(score, expectedScore);
}