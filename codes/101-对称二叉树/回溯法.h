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


        bool isMirror(TreeNode* n1,TreeNode* n2){
            // use postorder traversal
            if(n1==nullptr&&n2==nullptr){
                return true;
            }else if(n1==nullptr||n2==nullptr){
                return false;
            }else{
                return (n1->val==n2->val)&&
                        isMirror(n1->left,n2->right)&&
                        isMirror(n1->right,n2->left);

            }
        }

        bool isSymmetric(TreeNode* root) {
            return isMirror(root,root);
        }
    };
}



