#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
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
        private:
            int minimalDepth = 10000;
        public:
            int minDepth(TreeNode* root) {
                if(root==nullptr)
                    return 0;
                recursive(root,1);
                return minimalDepth;
            }

            void recursive(TreeNode* root,int depth){
                if(root->left==nullptr&&root->right==nullptr){
                    if(depth<minimalDepth)
                        minimalDepth = depth;
                    return;
                }else if(root->left==nullptr||root->right==nullptr){
                    TreeNode* tmp = (root->left==nullptr)?root->right:root->left;
                    recursive(tmp,depth+1);
                }else{
                    recursive(root->left,depth+1);
                    recursive(root->right,depth+1);
                }
            }
    };
}



