#include<cstdio>
#include "solution.h"


slution::Solution slu;

TEST(slutiontest, HandleNormalInput)
{
    int input1 = 1;
    bool output1 = true;
    EXPECT_EQ(output1, slu.isPalindrome(input1));

    int input2 = 11;
    bool output2 = true;
    EXPECT_EQ(output2, slu.isPalindrome(input2));

    int input3 = 12;
    bool output3 = false;
    EXPECT_EQ(output3, slu.isPalindrome(input3));


}


TEST(slutiontest, HandleExtremeInput)
{
    int input1 = -1;
    bool output1 = false;
    EXPECT_EQ(output1, slu.isPalindrome(input1));

    int input2 = 1214124;
    bool output2 = false;
    EXPECT_EQ(output2, slu.isPalindrome(input2));

    int input3 = 123321;
    bool output3 = true;
    EXPECT_EQ(output3, slu.isPalindrome(input3));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    /*vector<int> output1 = {};
    vector<int> re = slu.spiralOrder(input1);
    for(int i=0;i<re.size();i++)
        cout<<re[i]<<" ";*/
    return 0;
}
