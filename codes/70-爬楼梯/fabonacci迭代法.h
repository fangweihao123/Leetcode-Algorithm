#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
#include<queue>
#include<set>
using namespace std;
namespace slution{
    class Solution {
    public:
        int climbStairs(int n) {
            vector<int> v;
            v.resize(n+1);
            v[0] = 1;
            v[1] = 1;
            for(int i=2;i<=n;i++){
                v[i] = v[i-1] + v[i-2];
            }
            return v[n];
        }
    };
}



