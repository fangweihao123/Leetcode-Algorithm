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
     /*class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            //record current position
            int p1 = 0;
            int p2 = 0;
            vector<int> re;
            for(int i=0;i<nums1.size();i++){
                cout<<nums1[i]<<" ";
            }
            while(p1<nums1.size()&&p2<nums2.size()){
                if(nums1[p1]<nums2[p2]){
                    re.push_back(nums1[p1++]);
                }else{
                    re.push_back(nums2[p2++]);
                }
            }
            while(p1<nums1.size()){
                re.push_back(nums1[p1++]);
            }
            while(p2<nums2.size()){
                re.push_back(nums2[p2++]);
            }
            nums1 = re;
            for(int i=0;i<nums1.size();i++){
                cout<<nums1[i]<<" ";
            }
        }*/
        class Solution {
        public:
            bool isStrValid(string s){
                if(stoi(s)>255)
                    return false;
                else if(s[0]=='0'&&s.size()!=1)
                    return false;
                else
                    return true;
            }
            vector<string> restoreIpAddresses(string s) {
                vector<string> vs;
                for(int i=1;i<=3;i++){
                    for(int j=1;j<=3;j++){
                        for(int l=1;l<=3;l++){
                            for(int m=1;m<=3;m++){
                                if((i+j+l+m)==s.size()){
                                    string s1 = s.substr(0,i);
                                    if(!isStrValid(s1))
                                        continue;
                                    string s2 = s.substr(i,j);
                                    if(!isStrValid(s2))
                                        continue;
                                    string s3 = s.substr(i+j,l);
                                    if(!isStrValid(s3))
                                        continue;
                                    string s4 = s.substr(i+j+l,m);
                                    if(!isStrValid(s4))
                                        continue;
                                    vs.push_back(s1+'.'+s2+'.'+s3+'.'+s4);
                                }
                            }
                        }
                    }
                }
                return vs;

            }
        };
}



