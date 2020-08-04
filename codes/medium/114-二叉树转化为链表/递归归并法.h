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
     //ǰ�������˳�� �������ϵ�˳�� �������濪ʼ ��->��->��
    class Solution {
    public:
        //һ��ʼ�Ӹ��ڵ㿪ʼ ���Ҹ���֮�� ���ƶ�λ��
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



