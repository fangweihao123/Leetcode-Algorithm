#include<vector>
#include<string>
#include<iostream>
using namespace std;

//the character in the path can be replaced by another symbols

class Solution {
private:
    int offset_x[4] = {1,0,-1,0};
    int offset_y[4] = {0,1,0,-1};
public:
    bool dfs(vector<vector<char>>& board,string& word,int index,int x,int y){
        bool flag = false;
        if(x<0||x>=board.size()||y<0||y>=board[0].size())
            return false;
        // if(board[x][y]==string[index])
        //     return true;
        if(word[index] == board[x][y]){
            if(index == word.size()-1)
                return true;
            char tmp = board[x][y];
            board[x][y] = '0';
            for(int i=0;i<4;i++){
                if(dfs(board,word,index+1,x+offset_x[i],y+offset_y[i])){
                    board[x][y] = tmp;
                    return true;
                }
            }
            board[x][y] = tmp;
        }

        return false;

    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(dfs(board,word,0,i,j))
                    return true;
            }
        }
        return false;
    }
};

/*int main(){
    Solution slu;
    vector<vector<char>> board =
    {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCCED";
    if(slu.exist(board,word)){
        cout<<"1";
    }else{
        cout<<"2";
    }
    return 0;
}*/
