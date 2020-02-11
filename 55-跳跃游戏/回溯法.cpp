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
    bool dfs(vector<int>& nums,int index){
        if(index==nums.size()-1)
            return true;
        if(index>nums.size()-1)
            return false;
        for(int i=1;i<=nums[index];i++){
            if(record[index+i] == 0){
                if(dfs(nums,index+i)){
                    record[index] = 2;
                    return true;
                }
            }else if(record[index+i] == 1){
                continue;
            }else if(record[index+i] == 2){
                return true;
            }
        }
        record[index] = 1;
        return false;
    }

    bool canJump(vector<int>& nums) {
        record = new int[nums.size()];
        for(int i=0;i<nums.size();i++)
            record[i] = 0;
        return dfs(nums,0);
    }
};

int main(){
    Solution slu;
    vector<int> nums = {0,1};
    bool flag = slu.canJump(nums);
    cout<<flag<<endl;
    return 0;
}
