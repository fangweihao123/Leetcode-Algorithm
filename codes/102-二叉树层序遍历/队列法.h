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
            queue<TreeNode*> q;
        public:
            vector<vector<int>> levelOrder(TreeNode* root) {
                int cnt = 1;
                int nextCnt = 0;
                vector<int> tmp = {};
                vector<vector<int>> re = {};
                q.push(root);
                while(!q.empty()){
                    if(cnt>0){
                        TreeNode* head = q.front();
                        if(head->left!=nullptr)
                            q.push(head->left);
                        if(head->right!=nullptr)
                            q.push(head->right);
                        tmp.push_back(q->val);
                        cnt--;
                    }else{
                        cnt = nextCnt;
                        re.push_back(tmp);
                        nextCnt = 0;
                        tmp.clear();
                    }
                }
                return re;
            }
    };
}



