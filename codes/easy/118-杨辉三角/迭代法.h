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
            //��һ�к͵ڶ��ж��Ѿ��Ž�ȥ�� �ӵ����п�ʼ
            for(int i=3;i<=numRows;i++){
                //�������Ϳ�������������� ��n��Ԫ�ظ���Ϊn

                vector<int> tmp = generateVector(re[i-2],i);
                re.push_back(tmp);
            }
            return re;
        }
    };
}



