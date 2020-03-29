#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
using namespace std;

namespace slution{
    struct Path{
        int row;
        int column;
        Path(int _row,int _column){
            row = _row;
            column = _column;
        }
    };
    class Solution {
    private:
        vector<Path> vPath;
        vector<int> occupied;
        vector<vector<string>> result = {};
    public:
        void queenRecursive(vector<string>& temp,int index){
            int tmpColumn = -1;
            for(int i=0;i<occupied.size();i++){
                if(occupied[i]==0){
                    bool flag = false;
                    for(int j=0;j<vPath.size();j++){
                        if(abs(vPath[j].row-index) == abs(vPath[j].column-i)){
                            flag = true;
                            break;
                        }
                    }
                    if(flag)
                        continue;
                    else{
                        tmpColumn = i;
                        temp[index][tmpColumn] = 'Q';
                        vPath.push_back(Path(index,tmpColumn));
                        occupied[tmpColumn] = 1;
                        if(index == occupied.size()-1){
                            result.push_back(temp);
                        }else{
                            queenRecursive(temp,index+1);
                        }
                        occupied[tmpColumn] = 0;
                        vPath.pop_back();
                        temp[index][tmpColumn] = '.';
                    }
                }else{
                    continue;
                }
            }

        }

        vector<vector<string>> solveNQueens(int n) {
            result.clear();
            vector<string> temp;
            string s = "";
            for(int i=0;i<n;i++){
                s += '.';
                occupied.push_back(0);
            }
            for(int i=0;i<n;i++){
                temp.push_back(s);
            }
            queenRecursive(temp,0);
            return result;
        }
    };
}



