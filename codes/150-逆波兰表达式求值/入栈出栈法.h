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
        private:
            stack<int> numVec;
        public:
            int evalRPN(vector<string>& tokens) {
                for(int i=0;i<tokens.size();i++){
                    if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                        int num2 = numVec.top();
                        numVec.pop();
                        int num1 = numVec.top();
                        numVec.pop();
                        if(tokens[i]=="+"){
                            numVec.push(num1+num2);
                        }else if(tokens[i]=="-"){
                            numVec.push(num1-num2);
                        }else if(tokens[i]=="*"){
                            numVec.push(num1*num2);
                        }else if(tokens[i]=="/"){
                            numVec.push(num1/num2);
                        }
                    }else{
                        numVec.push(stoi(tokens[i]));
                    }
                }
            }
            return numVec.top();
    };
}



