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
    //�������߶̰� ��Ϊ��������ֻ��õ���С��ֵ
   class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            int l = 0,r = numbers.size()-1;
            int result;
            vector<int> v;
            while(l<r){
                result = numbers[l] + numbers[r];
                if(result<target){
                    l++;
                }else if(result>target){
                    r--;
                }else{
                    v.push_back(l+1);
                    v.push_back(r+1);
                    return v;
                }
            }
            return v;
        }
    };
}



