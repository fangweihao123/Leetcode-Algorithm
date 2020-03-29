#include<cstdio>
#include "solution.h"


slution::Solution slu;

TEST(slutiontest, HandleNormalInput)
{
    string input1 = "(()";
    int output1 = 2;
    EXPECT_EQ(output1, slu.longestValidParentheses(input1));

    string input2 = ")()())";
    int output2 = 4;
    EXPECT_EQ(output2, slu.longestValidParentheses(input2));

    string input3 = "()()";
    int output3 = 4;
    EXPECT_EQ(output3, slu.longestValidParentheses(input3));


}


TEST(slutiontest, HandleExtremeInput)
{
    string input1 = "(";
    int output1 = 0;
    EXPECT_EQ(output1, slu.longestValidParentheses(input1));

    string input2 = ")";
    int output2 = 0;
    EXPECT_EQ(output2, slu.longestValidParentheses(input2));

    string input3 = "((((";
    int output3 = 0;
    EXPECT_EQ(output3, slu.longestValidParentheses(input3));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
