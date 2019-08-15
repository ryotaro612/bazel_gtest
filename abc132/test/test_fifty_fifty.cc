#include <string>
#include <vector>
#include <iostream>
#include "gtest/gtest.h"
#include "abc132/lib/fifty_fifty.h"

TEST(TestFiftyFifty, First) {
    std::string arg = "ASSA";
    EXPECT_EQ("Yes", solve_fifty_fifty(arg));
}

TEST(TestFiftyFifty, Second) {
    std::string arg = "STOP";
    EXPECT_EQ("No", solve_fifty_fifty(arg));
}

TEST(TestFiftyFifty, Third) {
    std::string arg = "FFEE";
    EXPECT_EQ("Yes", solve_fifty_fifty(arg));
}

TEST(TestFiftyFifty, Fourth) {
    std::string arg = "FREE";
    EXPECT_EQ("No", solve_fifty_fifty(arg));
}

TEST(TestFiftyFifty, Fifth) {
    std::string arg = "FFFE";
    EXPECT_EQ("No", solve_fifty_fifty(arg));
}

