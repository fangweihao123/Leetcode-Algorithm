#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
using namespace std;

namespace slution{
    //can not end with / except root directory
    // min(grid[x-1][y],grid[x][y-1])
    class Solution {
    public:
        int minPathSum(vector<vector<int>>& grid) {
            vector<vector<int>> temp = grid;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    if(i==0&&j==0)
                        continue;
                    else if(i==0){
                        temp[i][j] = temp[i][j-1] + grid[i][j];
                    }else if(j==0){
                        temp[i][j] = temp[i-1][j] + grid[i][j];
                    }else{
                        temp[i][j] = min(temp[i][j-1],temp[i-1][j]) + grid[i][j];
                    }
                }
            }
            return temp[grid.size()-1][grid[0].size()-1];
        }
    };
}



