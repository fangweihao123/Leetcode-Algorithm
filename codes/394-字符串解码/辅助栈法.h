#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct Node {
    int multi;
    string res;
    Node(int _multi,string _res){
        multi = _multi;
        res = _res;
    }
};
    //������ֻ��һ���ظ������֣��������ܲ�ֹ�ظ�����һ�Ρ� n+1������
  class Solution {
    public:
        string decodeString(string s) {
            int multi = 0;
            string res = "";
            stack<Node> my_stack;
            for(int i=0;i<s.size();i++){
                if(s[i]>='0'&&s[i]<='9'){
                    multi = multi*10 + (s[i] - '0');
                }else if(s[i] == '['){
                    my_stack.push(Node(multi,res));
                    multi = 0;
                    res = "";
                }else if(s[i] == ']'){
                    Node tmp_node = my_stack.top();
                    string tmp_res = "";
                    tmp_res = tmp_node.res;
                    for(int j=0;j<tmp_node.multi;j++){
                        tmp_res += res;
                    }
                    res = tmp_res;
                    my_stack.pop();
                }else{
                    res += s[i];
                }
            }
            return res;
        }
    };
}



