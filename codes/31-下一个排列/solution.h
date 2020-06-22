#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
using namespace std;


namespace slution{
    //输入为 非空 字符串且只包含数字 1 和 0
   class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int tmp = 10000;
            int tmp_index = -1;
            bool flag = true;
            for(int i=nums.size()-1;i>0;i--){
                if(nums[i-1]<nums[i]){
                    //先换 再排序
                    for(int j=i;j<nums.size();j++){
                        if(nums[j]>nums[i-1]){
                            tmp = nums[j];
                            tmp_index = j;
                        }else{
                            break;
                        }
                    }
                    tmp = nums[i-1];
                    nums[i-1] = nums[tmp_index];
                    nums[tmp_index] = tmp;
                    //自己写一个reverse
                    myReverse(nums,i,nums.size()-1);
                    flag = false;
                    break;
                }
            }
            if(flag)
                myReverse(nums,0,nums.size()-1);
            return;
        }

        void myReverse(vector<int>& nums,int bIndex,int eIndex){
            int tmp;
            int cnt = (eIndex-bIndex+1)/2;
            for(int i=0;i<cnt;i++){
                tmp = nums[bIndex+i];
                nums[bIndex+i] = nums[eIndex-i];
                nums[eIndex-i] = tmp;
            }
        }
    };
}



