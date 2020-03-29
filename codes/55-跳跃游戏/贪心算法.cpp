#include<vector>
#include<string>
#include<iostream>
#include<stack>
using namespace std;


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last_pos = nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            //the good element in the left
            if(i+nums[i]>=last_pos)
                last_pos = i;
        }
        return last_pos == 0;
    }
};

int main(){
    Solution slu;
    vector<int> nums = {3,2,1,0,4};
    bool flag = slu.canJump(nums);
    cout<<flag<<endl;
    return 0;
}
