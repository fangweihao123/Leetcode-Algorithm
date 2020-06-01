#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
#include<set>
#include<map>
using namespace std;


namespace slution{
    /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



    //数组中只有一个重复的数字，但它可能不止重复出现一次。 n+1个数字
  class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            vector<bool> vec_b;
            int maximal = -1;
            for(int i=0;i<candies.size();i++){
                if(candies[i]>maximal)
                    maximal = candies[i];
            }
            for(int i=0;i<candies.size();i++){
                if(candies[i]+extraCandies>=maximal)
                    vec_b.push_back(true);
                else
                    vec_b.push_back(false);
            }
            return vec_b;
        }
    };
}



