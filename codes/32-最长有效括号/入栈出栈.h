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
    struct Node{
        char c;
        int index;
        Node(char _c,int _index){
            c = _c;
            index = _index;
        }
        Node(){}
    };
    class Solution {
    private:
        stack<Node> myStack;
        bool* result;
    public:
        int longestValidParentheses(string s) {
            result = new bool[s.size()];
            for(int i=0;i<s.size();i++)
                result[i] = false;
            for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    myStack.push(Node(s[i],i));
                }else if(s[i]==')'){
                    if(myStack.empty())
                        myStack.push(Node(s[i],i));
                    else if(myStack.top().c != s[i]){
                        result[myStack.top().index] = true;
                        myStack.pop();
                        result[i] = true;
                    }
                }
            }
            int cnt = 0;
            int maximal = -1;
            for(int i=0;i<s.size();i++){
                if(result[i])
                    cnt++;
                else{
                    if(cnt>maximal)
                        maximal = cnt;
                    cnt = 0;
                }
            }
            if(cnt>maximal)
                maximal = cnt;
            while(!myStack.empty())
                myStack.pop();
            delete[] result;
            return maximal;
        }
    };
}



