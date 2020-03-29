#include<vector>
#include<string>
#include<iostream>
#include<stack>
using namespace std;

//hua rong dao


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
            return;
        int temp;
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][n-1-i];
                matrix[n-1-j][n-1-i] = temp;
            }
        }
        int m = n/2;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[n-1-i][j];
                matrix[n-1-i][j] = temp;
            }
        }
    }
};

int main(){
    Solution slu;
    /*vector<vector<int>> nums =
    {
      {1,2,3},
      {4,5,6},
      {7,8,9}
    };*/
    vector<vector<int>> nums =
    {
      {5,1,9,11},
      {2,4,8,10},
      {13,3,6,7},
      {15,14,12,16}
    };
    slu.rotate(nums);
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
