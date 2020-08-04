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
     //ǰ�������˳�� �������ϵ�˳�� �������濪ʼ ��->��->��
    class Solution {
    public:
        bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
            //������Ⱦ�����û���ظ��ı� �ж��Ƿ���ڻػ� �������� ά����ȱ��
            int indegrees[10100] = {0};
            vector<vector<int>> adj;
            queue<int> q;
            int num = numCourses;
            adj.resize(numCourses);
            for(int i =0;i<prerequisites.size();i++){
                adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
                indegrees[prerequisites[i][0]] ++;
            }

            for(int i=0;i<numCourses;i++){
                if(indegrees[i]==0){
                    q.push(i);
                }
            }
            while(!q.empty()){
                int tmp = q.front();
                for(int i=0;i<adj[tmp].size();i++){
                    indegrees[adj[tmp][i]]--;
                    if(indegrees[adj[tmp][i]]==0)
                        q.push(adj[tmp][i]);
                }
                //ɾ��tmp����ڵ�
                num--;
                q.pop();
            }
            if(num==0){
                return true;
            }else{
                return false;
            }
        }
    };
}



