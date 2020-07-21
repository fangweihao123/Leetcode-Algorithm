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
    //类似杨辉三角
    class Solution {
    public:
        // O(n) 的额外空间（n 为三角形的总行数）来解决这个问题 triangle.size()
        int minimumTotal(vector<vector<int>>& triangle) {
            //贪心算法不行 每一个元素向下都有两个方向可以走 大体上有点类似二叉树 但是呢 二叉树之间又可以相互交叉
            //从最后一行拉起来 到底部最小的路径
            int len = triangle.size();
            //一开始都是0
            int *a = new int[len+1];
            for(int i=0;i<len+1;i++){
                a[i] = 0;
            }
            for(int i=triangle.size()-1;i>=0;i--){
                for(int j=0;j<=i;j++){
                    a[j] = triangle[i][j] + min(a[j],a[j+1]);
                }
            }
            int result = a[0];
            delete []a;
            return result;
        }
    };
    //二叉搜索树就是父节点比左子树所有元素都大 比右子树所有元素都小
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
    /*class Solution {
    public:
        vector<TreeNode*> generateTrees(int n) {

        }
    };*/
}



