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
    //������ֻ��һ���ظ������֣��������ܲ�ֹ�ظ�����һ�Ρ� n+1������
    class Solution {
    private:
        map<int,int> m;
    public:
        int subarraysDivByK(vector<int>& A, int K) {
            int sum = 0;
            int result = 0;
            //���ǵ���K��������
            m[0] = 1;
            for(int i=0;i<A.size();i++){
                sum += A[i];
                int tmp = sum%K;
                //������˼��
                if(tmp<0)
                    tmp = tmp+K;
                if(m.find(tmp) == m.end()){
                    m[tmp] = 1;
                }else{
                    result += m[tmp];
                    m[tmp] += 1;
                }
            }
            return result;
        }
    };
}



