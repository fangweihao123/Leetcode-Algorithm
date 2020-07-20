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
    //收缩两边短板 因为收缩长板只会得到更小的值
     /**
     * Definition for a binary tree node.
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     * };
     */
     /*
        节点的左子树只包含小于当前节点的数。
        节点的右子树只包含大于当前节点的数。
        所有左子树和右子树自身必须也是二叉搜索树。
     */
    class Solution {
    public:
        bool isValidBST(TreeNode* root) {
            bool flag = true;
            if(root==nullptr)
                return true;
            if(root->left!=nullptr){
                TreeNode* p = root->left;
                while(p->right!=nullptr){
                    p = p->right;
                }
                if(p->val>=root->val){
                    flag = false;
                }
            }

            if(root->right!=nullptr){
                TreeNode* p = root->right;
                while(p->left!=nullptr){
                    p = p->left;
                }
                if(p->val<=root->val){
                    flag = false;
                }
            }
            return flag&&isValidBST(root->left)&&isValidBST(root->right);
            //根节点要比左边所有的值都大 而不是比左子结点大就够了 所以要比左子树最大的那个值大
        }
    };
}



