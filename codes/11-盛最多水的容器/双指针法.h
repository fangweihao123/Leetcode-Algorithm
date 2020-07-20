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
        int maxArea(vector<int>& height) {
            int l = 0;
            int r = height.size()-1;
            int result = -1;
            while(r>l){
                int tmp = (r-l)*min(height[l],height[r]);
                if(tmp>result){
                    result = tmp;
                }
                if(height[l]<height[r]){
                    l++;
                }else{
                    r--;
                }
            }
        }
    };
}



