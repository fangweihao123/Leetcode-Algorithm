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
    //�����������
    class Solution {
    public:
        // O(n) �Ķ���ռ䣨n Ϊ�����ε��������������������� triangle.size()
        int minimumTotal(vector<vector<int>>& triangle) {
            //̰���㷨���� ÿһ��Ԫ�����¶���������������� �������е����ƶ����� ������ ������֮���ֿ����໥����
            //�����һ�������� ���ײ���С��·��
            int len = triangle.size();
            //һ��ʼ����0
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
    //�������������Ǹ��ڵ������������Ԫ�ض��� ������������Ԫ�ض�С
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



