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
    int input1_1 = 3;
    int input1_2 = 2;
    int output1 = 3;
    EXPECT_EQ(output1, slu.uniquePaths(input1_1,input1_2));

    int input2_1 = 2;
    int input2_2 = 2;
    int output2 = 2;
    EXPECT_EQ(output2, slu.uniquePaths(input2_1,input2_2));

}


TEST(slutiontest, HandleExtremeInput)
{

}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
