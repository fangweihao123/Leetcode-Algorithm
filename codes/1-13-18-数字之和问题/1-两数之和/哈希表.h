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
    private:
        map<int,int> m;
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            for(int i=0;i<nums.size();i++){
                if(m.find(target-nums[i])!=m.end()){
                    result.push_back(m.find(target-nums[i])->second);
                    result.push_back(i);
                    break;
                }
                m[nums[i]] = i;
            }
            return result;
        }
    };
}



