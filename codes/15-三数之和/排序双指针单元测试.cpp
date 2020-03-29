#include<cstdio>
#include "solution.h"

/*
class QueueTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    q1_.Enqueue(1);
    q2_.Enqueue(2);
    q2_.Enqueue(3);
  }

  // virtual void TearDown() {}

  Queue<int> q0_;
  Queue<int> q1_;
  Queue<int> q2_;
};
*/



slution::Solution slu;

TEST(slutiontest, HandleNormalInput)
{
    vector<int> input1 = {-1,0,1};
    vector<vector<int>> output1 = {{-1,0,1}};
    EXPECT_EQ(output1, slu.threeSum(input1));

    vector<int> input2 = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> output2 = {{-1, 0, 1},{-1, -1, 2}};
    EXPECT_EQ(output2, slu.threeSum(input2));
}


TEST(slutiontest, HandleExtremeInput)
{
    vector<int> input1 = {1};
    vector<vector<int>> output1 = {};
    EXPECT_EQ(output1, slu.threeSum(input1));

    vector<int> input2 = {0,0,0,1};
    vector<vector<int>> output2 = {{0,0,0}};
    EXPECT_EQ(output2, slu.threeSum(input2));

    vector<int> input3 = {1,1,1};
    vector<vector<int>> output3 = {};
    EXPECT_EQ(output3, slu.threeSum(input3));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
