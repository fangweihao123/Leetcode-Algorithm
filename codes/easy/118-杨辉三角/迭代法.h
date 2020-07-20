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

        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> re;
            if(numRows>=1){
                vector<int> tmp = {1};
                re.push_back(tmp);
            }
            if(numRows>=2){
                vector<int> tmp = {1,1};
                re.push_back(tmp);
            }
            //第一行和第二行都已经放进去了 从第三行开始
            for(int i=3;i<=numRows;i++){
                //接下来就可以用杨辉三角了 第n行元素个数为n

                vector<int> tmp = generateVector(re[i-2],i);
                re.push_back(tmp);
            }
            return re;
        }
    };
}



