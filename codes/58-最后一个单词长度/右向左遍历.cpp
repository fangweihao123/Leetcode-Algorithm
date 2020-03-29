#include<vector>
#include<string>
#include<iostream>
#include<stack>
using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = false;
        int cnt = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == ' '){
                if(!flag)
                    continue;
                else
                    return cnt;
            }else{
                flag = true;
                cnt++;
            }
        }
        return cnt;
    }
};
