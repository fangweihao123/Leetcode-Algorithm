#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
using namespace std;
namespace slution{
     class Solution {
        private:
            vector<vector<int>> result;
         public:
             //recursive to solve problem
             vector<vector<int>> combine(int n, int k) {
                 vector<int> v;
                recursive(1,k,n,v);
                return result;
             }

             void recursive(int index,int k,int n,vector<int>& v){
                 //k 是最长的长度
                 if(v.size()==k){
                    result.push_back(v);
                    return;
                 }
                if(index<=n){
                    v.push_back(index);
                    recursive(index+1,k,n,v);
                    v.pop_back();
                    recursive(index+1,k,n,v);
                }
             }
         };
}



