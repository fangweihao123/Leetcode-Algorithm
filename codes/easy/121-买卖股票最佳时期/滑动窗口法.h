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
    //�������������Ǹ��ڵ������������Ԫ�ض��� ������������Ԫ�ض�С
    class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            //���������Ʊǰ���� ˫ָ�뷨 �ҳ��������С���ұߵĶ� �����ҵ���ֵ����һ��
            int result = 0;
            int l = 0;
            int r = 0;
            int record = 0;
            for(r=0;r<prices.size();i++){
                if(prices[l]>prices[r])
                    l = r;
                record = prices[r]-prices[l];
                result = result>record?record:result;
            }
            return result;
        }
    };
}



