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
    //num1 和 num2 的长度小于110。
    //num1 和 num2 只包含数字 0-9。
   class Solution {
    private:
        map<char,vector<int>> m;
    public:
        bool isSudoku(int x1,int y1,int x2,int y2){
            //true表示满足数独条件
            if(x1==x2||y1==y2)
                return false;
            if(x1/3==x2/3&&y1/3==y2/3)
                return false;
            return true;
        }
        //数独的规则是9x9的格子
        bool isValidSudoku(vector<vector<char>>& board) {
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[0].size();j++){
                    if(board[i][j]!='.'){
                         map<char,vector<int>>::iterator iter = m.find(board[i][j]);
                        if(iter==m.end()){
                            //没有找到对应的情况下 就插入新的
                            vector<int> tmp;
                            tmp.push_back(i*9+j);
                            m[board[i][j]] = tmp;
                        }else{
                            //找到了对应的字符 说明出现过 只需要判断是否满足数独的条件
                            vector<int> v = iter->second;
                            for(int k=0;k<v.size();k++){
                                int x = v[k]/9;
                                int y = v[k]%9;
                                if(isSudoku(x,y,i,j)){
                                    iter->second.push_back(i*9+j);
                                }else{
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
            return true;
        }
};
}



