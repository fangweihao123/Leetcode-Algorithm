#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
using namespace std;
//Leetcode  62 不同路径 类似最短路径的问题
//type[i][j] = type[i-1][j] + type[i][j-1]

namespace slution{
    //can not end with / except root directory
    // min(grid[x-1][y],grid[x][y-1])
    class Solution {
    private:
        vector<int> tmpVec = {};
        vector<vector<int>> result = {};
    public:
        void dfs(vector<int>& nums,int index){
            int lastModified = -10000;
            for(int i=index;i<nums.size();i++){
                if(nums[i]!=lastModified){
                    tmpVec.push_back(nums[i]);
                    result.push_back(tmpVec);
                    lastModified = nums[i];
                    dfs(nums,i+1);
                    tmpVec.pop_back();
                }

            }
        }

        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            result = {};
            result.push_back(tmpVec);
            if(nums.size() == 0)
                return result;
            sort(nums.begin(),nums.end());
            dfs(nums,0);
            return result;

        }
    };
}



