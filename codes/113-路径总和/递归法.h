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
    //�Ӹ��ڵ㵽Ҷ�ӽڵ�·���ܺ͵��ڸ���Ŀ��͵�·����
    class Solution {
        private:
            vector<vector<int>> result;
        public:
            void recursive(TreeNode* root, int remainder,vector<int>& v){
                remainder -= root->val;
                v.push_back(root->val);
                if(root->left==nullptr&&root->right==nullptr){
                    if(remainder==0)
                        result.push_back(v);
                }else{
                    if(root->left!=nullptr)
                        recursive(root->left,remainder,v);
                    if(root->right!=nullptr)
                        recursive(root->right,remainder,v);
                }
                v.pop_back();
            }

            vector<vector<int>> pathSum(TreeNode* root, int sum) {
                if(root==nullptr)
                    return result;
                vector<int> v;
                recursive(root,sum,v);
                return result;
            }
    };
}



