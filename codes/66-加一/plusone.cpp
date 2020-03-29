#include<vector>
#include<string>
#include<iostream>
using namespace std;

//should pay attention to the situation 9->10

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 0;
        for(int i=digits.size()-1;i>=0;i--){
            int tmp = digits[i];
            if(c==1||i==digits.size()-1){
                c = 0;
                if(tmp==9){
                    c = 1;
                    digits[i] = 0;
                }else{
                    digits[i] += 1;
                }
            }
        }
        if(c==1)
            digits.insert(digits.begin(),1);
        return digits;
    }
};

/*int main(){
    Solution slu;
    vector<int> nums = {9,9};
    vector<int> v = slu.plusOne(nums);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    //slu.subsets(nums);
    return 0;
}*/
