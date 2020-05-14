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
    //��������ֻ�����������֡�
    //�����沨�����ʽ������Ч�ġ����仰˵�����ʽ�ܻ�ó���Ч��ֵ�Ҳ����ڳ���Ϊ 0 �������
    // + - * /
    class Solution {
        public:
            vector<string> generateParenthesis(int n) {
                vector<string> ans;
                string s;
                backTrace(ans,s,0,0,n);
                return ans;
            }

            void backTrace(vector<string>& ans,string s,int leftPare,int rightPare,int n){
                if(s.size()==n*2){
                    ans.push_back(s);
                    return;
                }

                if(leftPare<n){
                    s += '(';
                    backTrace(ans,s,leftPare+1,rightPare,n);
                    s.pop_back();
                }

                if(rightPare<leftPare){
                    s += ')';
                    backTrace(ans,s,leftPare,rightPare+1,n);
                    s.pop_back();
                }
            }
    };
}



