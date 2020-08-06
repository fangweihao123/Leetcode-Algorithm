#include<cstdio>
#include<gtest/gtest.h>
#include "solution.h"
using namespace slution;

Solution slu;

TEST(slutiontest, HandleNormalInput)
{
    string input1_1 = "the sky is blue";
    string output1 = "blue is sky the";
    EXPECT_EQ(output1, slu.reverseWords(input1_1));

    string input1_2 = "  hello world!  ";
    string output2 = "world! hello";
    EXPECT_EQ(output2, slu.reverseWords(input1_2));
}

TEST(slutiontest, HandleExtremeInput)
{
    string input1_1 = " the ";
    string output1 = "the";
    EXPECT_EQ(output1, slu.reverseWords(input1_1));

    string input1_2 = " ";
    string output2 = "";
    EXPECT_EQ(output2, slu.reverseWords(input1_2));

    string input1_3 = "   aaa  bbb   cccc  ";
    string output3 = "cccc bbb aaa";
    EXPECT_EQ(output3, slu.reverseWords(input1_3));
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
