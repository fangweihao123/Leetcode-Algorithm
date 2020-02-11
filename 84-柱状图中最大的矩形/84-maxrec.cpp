#include<vector>
#include<string>
#include<iostream>
#include<limits.h>
using namespace std;

class Solution {
public:
    int subMaxArea(vector<int>& heights,int l,int r){
        if(l==r)
            return heights[l];
        if(l>r)
            return 0;
        int minimum = INT_MAX;
        int index = -1;
        for(int i=l;i<=r;i++){
            if(heights[i]<minimum){
                minimum = heights[i];
                index = i;
            }
        }
        int left_Max = subMaxArea(heights,l,index-1);
        int right_Max = subMaxArea(heights,index+1,r);
        int mid_Max = (r-l+1)*minimum;
        int tmp_Max = left_Max>right_Max?left_Max:right_Max;
        tmp_Max = tmp_Max>mid_Max?tmp_Max:mid_Max;
        return tmp_Max;
    }
    int largestRectangleArea(vector<int>& heights) {
        return subMaxArea(heights,0,heights.size()-1);
    }
};

/*int main(){
    Solution slu;
    vector<int> nums = {2,1,5,6,2,3};
    int area = slu.largestRectangleArea(nums);
    cout<<area<<endl;
    return 0;
}*/
