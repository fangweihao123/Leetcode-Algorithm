#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
#include<set>
#include<map>
using namespace std;


namespace slution{
    /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



    //数组中只有一个重复的数字，但它可能不止重复出现一次。 n+1个数字
    class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            //KMS
            map<char,int> m;
            int start = 0;
            int maximal = 0;
            for(int i=0;i<s.size();i++){
                if(m.find(s[i]) == m.end()){
                    //设置其index
                    m[s[i]] = i;
                }else{
                    if(m[s[i]]<start)
                        m[s[i]] = i;
                    else{
                        start = m[s[i]]+1;
                        m[s[i]] = i;
                    }
                }
                if((i-start+1)>maximal)
                    maximal = i-start+1;
            }
            return maximal;
        }
    };
}



