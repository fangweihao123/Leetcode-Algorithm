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
    class Solution {
    public:
        vector<int> generateVector(vector<int> pre,int rowNum){
            vector<int> result;
            for(int i=0;i<rowNum;i++){
                if(i==0||i==rowNum-1){
                    result.push_back(1);
                }else{
                    result.push_back(pre[i]+pre[i-1]);
                }
            }
            return result;
        }

        //从0开始
        vector<int> getRow(int rowIndex)  {
            if(rowIndex==0){
                vector<int> tmp = {1};
                return tmp;
            }
            if(rowIndex==1){
                vector<int> tmp = {1,1};
                return tmp;
            }
            //第一行和第二行都已经放进去了 从第三行开始
            vector<int> pre = {1,1};
            for(int i=2;i<=rowIndex;i++){
                //接下来就可以用杨辉三角了 第n行元素个数为n
                pre = generateVector(pre,i+1);
            }
            return pre;
        }
    };
}



