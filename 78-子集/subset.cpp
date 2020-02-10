#include<vector>
#include<string>
#include<iostream>
using namespace std;

//�������ظ�Ԫ��

class Solution {
private:
    vector<int> record;
    vector<vector<int>> v;
public:
    void dfs(vector<int>& nums,int index){
        if(index == record.size()){
            vector<int> tmp;
            for(int i=0;i<record.size();i++){
                if(record[i]==1)
                    tmp.push_back(nums[i]);
            }
            v.push_back(tmp);
        }else{
            record[index] = 0;
            dfs(nums,index+1);
            record[index] = 1;
            dfs(nums,index+1);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //ÿһ��Ԫ��ֻ�д��ںͲ����ڵ����
        record.resize(nums.size());
        dfs(nums,0);
        return v;
    }
};

/*int main(){
    Solution slu;
    vector<int> nums = {1,2,3};
    vector<vector<int>> v = slu.subsets(nums);
    cout<<v.size();
    //slu.subsets(nums);
    return 0;
}*/
