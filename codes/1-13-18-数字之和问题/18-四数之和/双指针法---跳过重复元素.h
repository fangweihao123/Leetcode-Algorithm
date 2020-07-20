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
   class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            vector<vector<int>> re;
            if(nums.size()<4)
                return re;
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++){
                if(i<nums.size()-1){
                    if(nums[i]+3*nums[i+1]>target)
                        break;
                }
                if(i>0){
                    if(nums[i]==nums[i-1])
                        continue;
                }
                for(int j=i+1;j<nums.size();j++){
                    if(j>i+1){
                        if(nums[j]==nums[j-1])
                            continue;
                    }
                    int k = j+1;
                    int l = nums.size()-1;
                    while(k<l){
                        if(nums[i]+nums[j]+nums[k]+nums[l]>target){
                            l--;
                            while(nums[l]==nums[l+1]&&k<l)
                                l--;
                        }
                        else if(nums[i]+nums[j]+nums[k]+nums[l]<target){
                            k++;
                            while(nums[k]==nums[k-1]&&k<l)
                                k++;
                        }else{
                            vector<int> tmp;
                            tmp.push_back(nums[i]);
                            tmp.push_back(nums[j]);
                            tmp.push_back(nums[k]);
                            tmp.push_back(nums[l]);
                            re.push_back(tmp);
                            l--;
                            while(nums[l]==nums[l+1]&&k<l)
                                l--;
                        }
                    }
                }
            }
            return re;
        }
    };
}



