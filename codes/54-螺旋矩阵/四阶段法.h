#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
using namespace std;
//Leetcode  62 不同路径 类似最短路径的问题
//type[i][j] = type[i-1][j] + type[i][j-1]

namespace slution{
    //can not end with / except root directory
    // min(grid[x-1][y],grid[x][y-1])
    class Solution {
    private:
        int x_offset[4] = {0,1,0,-1};
        int y_offset[4] = {1,0,-1,0};
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> result;
            if(matrix.size()==0)
                return result;
            int m = matrix.size();
            int n = matrix[0].size();
            int len = m*n;
            vector<int> v;
            vector<vector<int>> tmp = {};
            for(int i=0;i<m+2;i++){
                for(int j=0;j<n+2;j++){
                    if(i==0||j==0||i==m+1||j==n+1){
                        v.push_back(1);
                    }else{
                        v.push_back(0);
                    }
                    //cout<<v[j]<<" ";
                }
                //cout<<endl;
                tmp.push_back(v);
                v.clear();
            }

            int x = 1,y = 1,cnt = 0;
            int stage = 0;
            while(1){
                if(tmp[x+x_offset[stage]][y+y_offset[stage]]==1)
                    stage = (stage + 1)%4;
                result.push_back(matrix[x-1][y-1]);
                cnt++;
                tmp[x][y] = 1;
                x += x_offset[stage];
                y += y_offset[stage];
                if(cnt == len)
                    break;
            }
            return result;

        }
    };
}



