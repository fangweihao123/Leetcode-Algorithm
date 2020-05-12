#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
#include<set>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

namespace slution{
    class Solution {
    private:
        stack<ListNode*> s;
        queue<ListNode*> q;
    public:
        void reorderList(ListNode* head) {
            ListNode* tmp = head;
            int cnt = 0;
            while(tmp != nullptr){
                s.push(tmp);
                q.push(tmp);
                cnt++;
                tmp = tmp->next;
            }
            //all false
            ListNode*  pre = nullptr;
            for(int i=0;i<cnt/2;i++){
                ListNode*  p1 = q.front();
                ListNode*  p2 = s.top();
                p1->next = p2;
                if(i==0){
                    head = p1;
                }else{
                    pre->next = p1;
                }
                pre = p2;
                q.pop();
                s.pop();
            }
            if(cnt%2 == 1){
                pre->next = q.front();
            }
        }
        };
}



