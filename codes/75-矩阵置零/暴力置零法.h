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
        //先去查找哪一行 哪一列
        private:
            set<int> row_mem;
            set<int> col_mem;
        public:
            void setZeroes(vector<vector<int>>& matrix) {
                for(int i=0;i<matrix.size();i++){
                    for(int j=0;j<matrix[0].size();j++){
                        if(matrix[i][j] == 0){
                            row_mem.insert(i);
                            col_mem.insert(j);
                        }
                    }
                }

                for(int i=0;i<matrix.size();i++){
                    for(int j=0;j<matrix[0].size();j++){
                        if(row_mem.find(i)!=row_mem.end()||col_mem.find(j)!=col_mem.end()){
                            matrix[i][j] = 0;
                        }
                    }
                }
            }
        };
}



