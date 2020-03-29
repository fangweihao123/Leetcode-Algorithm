#include<vector>
#include<string>
#include<iostream>
using namespace std;


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    vector<int> result;
public:
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorderTraversal(root->left);
        result.push_back(root->val);
        inorderTraversal(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return result;
    }
};

/*int main(){
    Solution slu;
    TreeNode* root = new TreeNode(1);
    TreeNode* node1 = new TreeNode(2);
    TreeNode* node2 = new TreeNode(3);
    root->right = node1;
    node1->left = node2;
    vector<int> v = slu.inorderTraversal(root);
    cout<<v.size();
    return 0;
}*/
