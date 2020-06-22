#include<cstdio>
#include<gtest/gtest.h>
#include "solution.h"
using namespace slution;

Solution slu;

TEST(slutiontest, HandleNormalInput)
{

    vector<int> input1 = {1,2,3,4};
    slu.nextPermutation(input1);
    for(int i=0;i<input1.size();i++)
        cout<<input1[i]<<endl;
    //EXPECT_EQ(input1, slu.nextPermutation(input1));
    vector<int> input2 = {1,2,4,3};
    slu.nextPermutation(input2);
    for(int i=0;i<input2.size();i++)
        cout<<input2[i]<<endl;

}

TEST(slutiontest, HandleExtremeInput)
{
    vector<int> input1 = {4,3,2,1};
    slu.nextPermutation(input1);
    for(int i=0;i<input1.size();i++)
        cout<<input1[i]<<endl;

    vector<int> input2 = {1};
    slu.nextPermutation(input2);
    for(int i=0;i<input2.size();i++)
        cout<<input2[i]<<endl;

    vector<int> input3 = {2,3,1};
    slu.nextPermutation(input3);
    for(int i=0;i<input3.size();i++)
        cout<<input3[i]<<endl;
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
