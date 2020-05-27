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
    //数组中只有一个重复的数字，但它可能不止重复出现一次。 n+1个数字
    class Solution {
    private:
        map<int,int> m;
    public:
        int subarraysDivByK(vector<int>& A, int K) {
            int sum = 0;
            int result = 0;
            //考虑到被K整除的数
            m[0] = 1;
            for(int i=0;i<A.size();i++){
                sum += A[i];
                int tmp = sum%K;
                //余数的思想
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



