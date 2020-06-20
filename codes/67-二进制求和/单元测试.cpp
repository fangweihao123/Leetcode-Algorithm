#include<cstdio>
#include<gtest/gtest.h>
#include "solution.h"
using namespace slution;

Solution slu;

TEST(slutiontest, HandleNormalInput)
{

    string input1 = "110";
    string input2 = "1";
    string output1 = "111";
    EXPECT_EQ(output1, slu.addBinary(input1,input2));

    input1 = "11";
    input2 = "1";
    output1 = "100";
    EXPECT_EQ(output1, slu.addBinary(input1,input2));

    input1 = "1010";
    input2 = "1011";
    output1 = "10101";
    EXPECT_EQ(output1, slu.addBinary(input1,input2));


}


TEST(slutiontest, HandleExtremeInput)
{
    string input1 = "0";
    string input2 = "0";
    string output1 = "0";
    EXPECT_EQ(output1, slu.addBinary(input1,input2));
}



int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
