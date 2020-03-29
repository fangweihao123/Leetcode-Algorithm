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
    string input1 = "/../";
    string output1 = "/";
    EXPECT_EQ(output1, slu.simplifyPath(input1));

    string input2 = "/home//foo/";
    string output2 = "/home/foo";
    EXPECT_EQ(output2, slu.simplifyPath(input2));

    string input3 = "/home/";
    string output3 = "/home";
    EXPECT_EQ(output3, slu.simplifyPath(input3));

}


TEST(slutiontest, HandleExtremeInput)
{
    string input1 = "/a/./b/../../c/";
    string output1 = "/c";
    EXPECT_EQ(output1, slu.simplifyPath(input1));
    string input2 = "/a/../../b/../c//.//";
    string output2 = "/c";
    EXPECT_EQ(output2, slu.simplifyPath(input2));
    string input3 = "/a//b////c/d//././/..";
    string output3 = "/a/b/c";
    EXPECT_EQ(output3, slu.simplifyPath(input3));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
