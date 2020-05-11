#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
#include<set>
using namespace std;
namespace slution{
    class Solution {
    public:
        void merge1(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            //record current position
            int p1 = 0;
            int p2 = 0;
            vector<int> re;
            while(p1<m&&p2<n){
                if(nums1[p1]<nums2[p2]){
                    re.push_back(nums1[p1++]);
                }else{
                    re.push_back(nums2[p2++]);
                }
            }
            while(p1<m){
                re.push_back(nums1[p1++]);
            }
            while(p2<n){
                re.push_back(nums2[p2++]);
            }
            nums1 = re;
        }
};
}



