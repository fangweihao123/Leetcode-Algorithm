#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
using namespace std;
//Leetcode  62 不同路径 类似最短路径的问题
//type[i][j] = type[i-1][j] + type[i][j-1]
//sort problem
namespace slution{
     class Solution {
     public:
        //constrained condition only three nums exists
        void sortColors(vector<int>& nums) {
            //rightmost of 0
            int p0 = 0;
            int p2 = nums.size()-1;
            int cur = 0;
            int tmp = 0;
            while(cur<=p2){
                if(nums[cur] == 2){
                    tmp = nums[p2];
                    nums[p2] = nums[cur];
                    nums[cur] = tmp;
                    p2--;
                }else if(nums[cur] == 0){
                    tmp = nums[p0];
                    nums[p0] = nums[cur];
                    nums[cur] = tmp;
                    p0++;
                    cur++;
                }else
                    cur++;
            }
        }
    };
}



