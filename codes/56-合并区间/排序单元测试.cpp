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
    vector<vector<int>> input1 = {{1,3},{2,6},{8,10},{15,18},{3,4}};
    vector<vector<int>> output1 = {{1,6},{8,10},{15,18}};
    EXPECT_EQ(output1, slu.merge(input1));

    vector<vector<int>> input2 = {{1,5},{2,30},{8,100},{105,180}};
    vector<vector<int>> output2 = {{1,100},{105,180}};
    EXPECT_EQ(output2, slu.merge(input2));

    vector<vector<int>> input3 = {{1,5},{5,10}};
    vector<vector<int>> output3 = {{1,10}};
    EXPECT_EQ(output3, slu.merge(input3));


}

TEST(slutiontest, HandleExtremeInput)
{
    vector<vector<int>> input1 = {{1,5}};
    vector<vector<int>> output1 = {{1,5}};
    EXPECT_EQ(output1, slu.merge(input1));

    vector<vector<int>> input2 = {{2,3},{4,5},{6,7},{8,9},{1,10}};
    vector<vector<int>> output2 = {{1,10}};
    EXPECT_EQ(output2, slu.merge(input2));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
