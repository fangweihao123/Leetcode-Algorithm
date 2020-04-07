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
    public:
        int getNumberLength(int x){
            int cnt = 0;
            while(x!=0){
                x = x/10;
                cnt++;
            }
            return cnt;
        }

        bool isPalindrome(int x) {
            stack<int> s;
            int re = 0;
            if(x<0)
                return false;
            else if(x>=0&&x<10)
                return true;
            else{
                int len = getNumberLength(x);
                int midL = len/2;   //8-->4  9-->4
                int midR = (len+1)/2;    //8-->4  9-->5
                for(int i=0;i<len;i++){
                    re = x%10;
                    x = x/10;
                    if(i<midL){
                        s.push(re);
                    }else if(i>=midR){
                        if(s.top()!=re)
                            return false;
                        s.pop();
                    }
                }
                return true;
            }

        }
    };
}



