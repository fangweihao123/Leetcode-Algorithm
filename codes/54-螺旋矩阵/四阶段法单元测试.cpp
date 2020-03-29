#include<cstdio>
#include "solution.h"


slution::Solution slu;

TEST(slutiontest, HandleNormalInput)
{
    vector<vector<int>> input1 = {
                         { 1, 2, 3 },
                         { 4, 5, 6 },
                         { 7, 8, 9 }
                     };
    vector<int> output1 = {1,2,3,6,9,8,7,4,5};
    EXPECT_EQ(output1, slu.spiralOrder(input1));

    vector<vector<int>> input2 = {
                                  {1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9,10,11,12}
                                };
    vector<int> output2 = {1,2,3,4,8,12,11,10,9,5,6,7};
    EXPECT_EQ(output2, slu.spiralOrder(input2));


}


TEST(slutiontest, HandleExtremeInput)
{
    vector<vector<int>> input1 = {
                                    { 1}
                                 };
    vector<int> output1 = {1};
    EXPECT_EQ(output1, slu.spiralOrder(input1));

    vector<vector<int>> input2 = {
                                 };
    vector<int> output2 = {};
    EXPECT_EQ(output2, slu.spiralOrder(input2));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    /*vector<vector<int>> input1 = {};
    vector<int> output1 = {};
    vector<int> re = slu.spiralOrder(input1);
    for(int i=0;i<re.size();i++)
        cout<<re[i]<<" ";*/
    return 0;
}
