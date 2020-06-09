#include <gtest/gtest.h>
#include "../Reg.h"

TEST(Reg, vowels)
{
    std::string file = "D:/Tasks/Easy_1_7/Smth.txt";
    try
    {
        int number = reg::vowels(file);
    }
    catch (const std::exception & error)
    {
        ASSERT_EQ (std::string(error.what()), "Error");
    }
}

TEST(Reg, one_letter)
{
    std::string file = "D:/Tasks/Easy_1_7/Smth.txt";
    try {
        int number = reg::one_letter(file);
    }
    catch (const std::exception & error)
    {
        ASSERT_EQ(std::string(error.what()), "Error");
    }
}

TEST(Regex, vowels_1)
{
    std::string file = "D:/Tasks/Easy_1_7/Smth.txt";
    int actual = 294;
    int quantity = reg::vowels(file);
    ASSERT_EQ(quantity, actual);
}

TEST(myregex, one_letter_1)
{
    std::string file = "D:/Tasks/Easy_1_7/Smth.txt";
    int actual = 13;
    int quantity = reg::one_letter(file);
    ASSERT_EQ(quantity, actual);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return  RUN_ALL_TESTS();
}