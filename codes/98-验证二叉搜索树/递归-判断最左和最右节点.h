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
    //�������߶̰� ��Ϊ��������ֻ��õ���С��ֵ
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
        �ڵ��������ֻ����С�ڵ�ǰ�ڵ������
        �ڵ��������ֻ�������ڵ�ǰ�ڵ������
        �������������������������Ҳ�Ƕ�����������
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
            //���ڵ�Ҫ��������е�ֵ���� �����Ǳ����ӽ���͹��� ����Ҫ�������������Ǹ�ֵ��
        }
    };
}



