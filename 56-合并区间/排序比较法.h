#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
using namespace std;

namespace slution{
    bool myCmp(const vector<int>& l,const vector<int>& r){
        return l[0]<r[0];
    }

    class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            vector<vector<int>> temp;
            sort(intervals.begin(),intervals.end(),myCmp);
            int cnt=0;
            for(auto iter=intervals.begin();iter!=intervals.end();iter++,cnt++){
                if(cnt==0){
                    temp.push_back(intervals[cnt]);
                }else{
                    if(intervals[cnt][0]<=temp[temp.size()-1][1]){
                        temp[temp.size()-1][1] = max(intervals[cnt][1],temp[temp.size()-1][1]);
                    }else{
                        temp.push_back(intervals[cnt]);
                    }
                }
            }
            return temp;
        }
    };
}



