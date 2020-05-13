#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
#include<set>
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
    class Solution {
        private:
            int max_depth = 0;
        public:
            void recursive(TreeNode* root,int depth){
                if(depth>max_depth)
                    max_depth = depth;
                if(root->left!=nullptr)
                    recursive(root->left,depth+1);
                if(root->right!=nullptr)
                    recursive(root->right,depth+1);
            }

            int maxDepth(TreeNode* root) {
                if(root==nullptr)
                    return 0;
                recursive(root,1);
                return max_depth;
            }
    };
}



