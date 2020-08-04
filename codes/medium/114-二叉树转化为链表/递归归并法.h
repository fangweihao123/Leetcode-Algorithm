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
     /**
     * Definition for a binary tree node.
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     * };
     */
     //前序遍历的顺序 从下至上的顺序 从最下面开始 中->左->右
    class Solution {
    public:
        //一开始从根节点开始 左右改造之后 再移动位置
        void flatten(TreeNode* root) {
            if(root==nullptr)
                return;
            flatten(root->left);
            flatten(root->right);
            if(root->left!=nullptr&&root->right!=nullptr){
                TreeNode* tmp = root->left;
                while(tmp->right!=nullptr)
                    tmp = tmp->right;
                tmp->right = root->right;
                root->right = root->left;
                root->left = nullptr;
            }else if(root->left!=nullptr&&root->right==nullptr){
                root->right = root->left;
                root->left = nullptr;
            }
        }
    };
}



