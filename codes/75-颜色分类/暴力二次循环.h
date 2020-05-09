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

namespace slution{
     class Solution {
     private:
        int cnt_zero = 0;
        int cnt_one = 0;
        int cnt_two = 0;
        int index = 0;
     public:
        void sortColors(vector<int>& nums) {
            for(int i=0;i<nums.size();i++){
                switch(nums[i]){
                    case 0:
                        cnt_zero += 1;
                        break;
                    case 1:
                        cnt_one += 1;
                        break;
                    case 2:
                        cnt_two += 1;
                        break;
                }
            }
            while(cnt_zero>0){
                nums[index] = 0;
                index += 1;
                cnt_zero -= 1;
            }
            while(cnt_one>0){
                nums[index] = 1;
                index += 1;
                cnt_one -= 1;
            }
            while(cnt_two>0){
                nums[index] = 2;
                index += 1;
                cnt_two -= 1;
            }

        }
    };
}



