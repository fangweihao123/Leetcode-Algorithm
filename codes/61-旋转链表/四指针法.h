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
     * Definition for singly-linked list.
     * struct ListNode {
     *     int val;
     *     ListNode *next;
     *     ListNode(int x) : val(x), next(NULL) {}
     * };
    */
   class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if(head==nullptr)
                return head;
            int cnt = 0;
            ListNode* tmp = head;
            while(tmp!=nullptr){
                cnt++;
                tmp = tmp->next;
            }
            k = k%cnt;
            //need 4 points
            tmp = head;
            ListNode* p1;
            ListNode* p2;
            ListNode* p3;
            ListNode* p4;
            for(int i=0;i<cnt;i++){
                if(i==0)
                    p1 = tmp;
                else if(i==cnt-k-2)
                    p2 = tmp;
                else if(i==cnt-k-1)
                    p3 = tmp;
                else if(i==cnt-1)
                    p4 = tmp;
                tmp = tmp->next;
            }
            p4->next = p1;
            p2->next = nullptr;
            return p3;
        }
    };
}



