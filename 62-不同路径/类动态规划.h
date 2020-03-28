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
        vector<vector<int>> v;
    public:
        int uniquePaths(int m, int n) {
            vector<int> tmpVec(n);
            for(int i=0;i<m;i++)
                v.push_back(tmpVec);

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==0||j==0)
                        v[i][j] = 1;
                    else{
                        v[i][j] = v[i-1][j] + v[i][j-1];
                    }
                }
            }
            return v[m-1][n-1];
        }
    };
}



