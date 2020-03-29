#include<vector>
#include<string>
#include<iostream>
#include<limits.h>
using namespace std;


class Solution {
public:
    bool subDivide(vector<vector<int>>& matrix, int target,int l,int r){
        if(l>r)
            return false;
        int row = matrix.size();
        int column = matrix[0].size();
        int mid = (l+r)/2;
        int mid_num = matrix[mid/column][mid%column];
        if(mid_num==target){
            return true;
        }else if(mid_num>target){
            return subDivide(matrix,target,l,mid-1);
        }else{
            return subDivide(matrix,target,mid+1,r);
        }
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return false;
        return subDivide(matrix,target,0,matrix.size()*matrix[0].size()-1);
    }
};


/*int main(){
    Solution slu;
    vector<vector<int>> nums =
    {
        {
            1,2,3
        },
        {
            5,6,7
        },
        {
            7,8,9
        }
    };
    bool flag = slu.searchMatrix(nums,10);
    if(flag)
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;
    return 0;
}*/

