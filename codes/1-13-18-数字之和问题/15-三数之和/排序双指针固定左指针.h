#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
using namespace std;
//Leetcode 15 三数之和
//1.排序 2.通过三个指针来寻找和为0的情况
//关注相同元素的处理 先确定最左边的元素

namespace slution{
    //can not end with / except root directory
    // min(grid[x-1][y],grid[x][y-1])
    class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            vector<int> tempVec;
            vector<vector<int>> result = {};
            if(nums.size()<3)
                return result;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>0)
                    break;
                if(i!=0){
                    if(nums[i]==nums[i-1])
                        continue;
                }
                int L = i+1, R = nums.size()-1;
                while(L<R){
                    if(R < nums.size()-1){
                        if(nums[R] == nums[R+1]){
                            R--;
                            continue;
                        }
                    }
                    if(L > i+1){
                        if(nums[L] == nums[L-1]){
                            L++;
                            continue;
                        }
                    }
                    if(nums[i] + nums[L]+ nums[R] > 0)
                        R--;
                    else if(nums[i] + nums[L]+ nums[R] < 0)
                        L++;
                    else if(nums[i] + nums[L]+ nums[R] == 0){
                        tempVec.push_back(nums[i]);
                        tempVec.push_back(nums[L]);
                        tempVec.push_back(nums[R]);
                        result.push_back(tempVec);
                        tempVec.clear();
                        R--;
                        L++;
                    }
                }
            }
            return result;
        }
    };
}



