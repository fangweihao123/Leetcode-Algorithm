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

        //��0��ʼ
        vector<int> getRow(int rowIndex)  {
            if(rowIndex==0){
                vector<int> tmp = {1};
                return tmp;
            }
            if(rowIndex==1){
                vector<int> tmp = {1,1};
                return tmp;
            }
            //��һ�к͵ڶ��ж��Ѿ��Ž�ȥ�� �ӵ����п�ʼ
            vector<int> pre = {1,1};
            for(int i=2;i<=rowIndex;i++){
                //�������Ϳ�������������� ��n��Ԫ�ظ���Ϊn
                pre = generateVector(pre,i+1);
            }
            return pre;
        }
    };
}



