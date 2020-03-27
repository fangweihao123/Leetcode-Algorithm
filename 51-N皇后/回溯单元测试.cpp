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
    int input1 = 4;
    vector<vector<string>> output1 =
    {
        {".Q..",
         "...Q",
         "Q...",
         "..Q."},
         {"..Q.",
          "Q...",
          "...Q",
          ".Q.."}
    };

    int input3 = 1;
    vector<vector<string>> output3 =
    {
        {"Q"}
    };
    EXPECT_EQ(output3, slu.solveNQueens(input3));

}


TEST(slutiontest, HandleExtremeInput)
{
    int input2 = 2;
    vector<vector<string>> output2 =
    {
    };
    EXPECT_EQ(output2, slu.solveNQueens(input2));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
