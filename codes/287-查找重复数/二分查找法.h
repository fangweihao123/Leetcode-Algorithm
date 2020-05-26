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
        int findDuplicate(vector<int>& nums) {
            int n = nums.size();
            int l = 1 , r = n-1;
            int ans;
            //l r 不是下标
            while(l<r){
                int mid = (l+r)/2;
                int cnt = 0;
                for(int i=0;i<n;i++){
                    if(nums[i]<=mid)
                        cnt++;
                }
                if(cnt>mid){
                    r = mid;
                }else{
                    l = mid + 1;
                }
            }
            ans = l;
            return ans;
        }
    };
}



