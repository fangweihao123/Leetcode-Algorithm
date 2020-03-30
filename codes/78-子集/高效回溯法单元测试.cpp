#include<cstdio>
#include "solution.h"


slution::Solution slu;

TEST(slutiontest, HandleNormalInput)
{
    vector<int> input1 = {1,2,2};
    vector<vector<int>> output1 = {
                                  {2},
                                  {1},
                                  {1,2,2},
                                  {2,2},
                                  {1,2},
                                  {}
                                  };
    EXPECT_EQ(output1, slu.subsetsWithDup(input1));

    vector<int> input2 = {1};
    vector<vector<int>> output2 = {
                                  {1},
                                  {}
                                  };
    EXPECT_EQ(output2, slu.subsetsWithDup(input2));

    vector<int> input3 = {1,1,2,2};
    vector<vector<int>> output3 = {{},{1},{1,1},{1,1,2},{1,1,2,2},{1,2},{1,2,2},{2},{2,2}};
    EXPECT_EQ(output3, slu.subsetsWithDup(input3));


}


TEST(slutiontest, HandleExtremeInput)
{
    vector<int> input1 = {
                                 };
    vector<vector<int>> output1 = {{}};
    EXPECT_EQ(output1, slu.subsetsWithDup(input1));
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
