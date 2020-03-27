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
    vector<vector<int>> input1 = {
                      {1,3,1},
                      {1,5,1},
                      {4,2,1}
                    };
    int output1 = 7;
    EXPECT_EQ(output1, slu.minPathSum(input1));

    vector<vector<int>> input2 = {
                      {1,1,1},
                      {1,1,1},
                      {1,1,1}
                    };
    int output2 = 5;
    EXPECT_EQ(output2, slu.minPathSum(input2));
}


TEST(slutiontest, HandleExtremeInput)
{
    vector<vector<int>> input1 = {
                      {1}
                    };
    int output1 = 1;
    EXPECT_EQ(output1, slu.minPathSum(input1));

    vector<vector<int>> input2 = {
                      {1,1,1}
                    };
    int output2 = 3;
    EXPECT_EQ(output2, slu.minPathSum(input2));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
