
#include<vector>
#include<string>
#include<iostream>
#include<stack>
using namespace std;

enum INDEX{
    UNKNOWN,
    BAD,
    GOOD
};

class Solution {
private:
    int* record;
public:
    bool canJump(vector<int>& nums) {
        record = new int[nums.size()];
        for(int i=0;i<nums.size();i++)
            record[i] = UNKNOWN;
        record[nums.size()-1] = GOOD;
        for(int i=nums.size()-2;i>=0;i--){
            int furthestJump = (i+nums[i])>(nums.size()-1)?(nums.size()-1):(i+nums[i]);
            for(int j=i+1;j<=furthestJump;j++){
                if(record[j] == GOOD){
                    record[i] = GOOD;
                    break;
                }
            }
        }
        if(record[0] == GOOD)
            return true;
        else
            return false;
    }
};

int main(){
    Solution slu;
    vector<int> nums = {3,2,1,0,4};
    bool flag = slu.canJump(nums);
    cout<<flag<<endl;
    return 0;
}
