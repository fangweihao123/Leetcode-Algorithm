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
    //二叉搜索树就是父节点比左子树所有元素都大 比右子树所有元素都小
    class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            //不能买入股票前卖出 双指针法 找出所有左边小于右边的对 并且找到差值最大的一对
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



