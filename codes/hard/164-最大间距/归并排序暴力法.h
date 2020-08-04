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
        void mergeSort(vector<int>& nums1,vector<int>& nums2,int l,int r){
            if(l==r)
                return;
            int mid = (l+r)/2;
            mergeSort(nums1,nums2,l,mid);
            mergeSort(nums1,nums2,mid+1,r);
            myMerge(nums1,nums2,l,r,mid);
        }
        //nums承载数据
        void myMerge(vector<int>& nums1,vector<int>& nums2,int l,int r,int mid){
            //排序的同时寻找最大的差值
            int tmp_l = l;
            int tmp_r = mid+1;
            int index = l;
            while(tmp_l<=mid&&tmp_r<=r){
                nums2[index++] = nums1[tmp_l]<nums1[tmp_r]?nums1[tmp_l++]:nums1[tmp_r++];
            }
            while(tmp_l<=mid){
                nums2[index++] = nums1[tmp_l++];
            }
            while(tmp_r<=r){
                nums2[index++] = nums1[tmp_r++];
            }
            for(int i=l;i<=r;i++){
                nums1[i] = nums2[i];
            }
        }

        int maximumGap(vector<int>& nums) {
            //寻找排序好的相邻元素之间最大差值 是否可以在归并排序中进行
            if(nums.size()<=1)
                return 0;
            vector<int> re(nums.size());
            int maxGap = -1;
            mergeSort(nums,re,0,nums.size()-1);
            for(int i =0;i<re.size();i++){
                if(i!=0){
                    if(maxGap<re[i]-re[i-1])
                        maxGap = re[i]-re[i-1];
                }
            }
            return maxGap;
        }
    };
}



