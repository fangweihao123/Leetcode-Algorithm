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
    /**
     * Definition for a binary tree node.
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     * };
     */
    class Solution {
    public:
        bool isSameTree(TreeNode* p, TreeNode* q) {
            if(p==nullptr&&q==nullptr)
                return true;
            else if(p==nullptr||q==nullptr)
                return false;
            else{
                if(p->val == q->val){
                    return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
                }else
                    return false;
            }
        }
    };
}



