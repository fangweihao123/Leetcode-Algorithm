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
    /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



    //输入为 非空 字符串且只包含数字 1 和 0
    class Solution {
    public:
        string addBinary(string a, string b) {
            //miniLen代表两个字符串中最短的长度 采用驼峰命名法
            //相加无非三种情况 0+0=0 1+0=1 1+1=0 进一位
            int cnt = 1;
            int c = 0;
            int aLen = a.size();
            int bLen = b.size();
            int tmpA,tmpB;
            string result = "";
            //当遍历的长度没有达到长字符串的长度时候 继续遍历
            while(cnt<=aLen||cnt<=bLen){
                //取当前字符串的字符
                if(cnt<=aLen){
                    tmpA = a[aLen-cnt] - '0';
                }else{
                    tmpA = 0;
                }
                if(cnt<=bLen){
                    tmpB = b[bLen-cnt] - '0';
                }else{
                    tmpB = 0;
                }
                char tmp = (tmpA+tmpB+c)%2 + '0';
                c = (tmpA+tmpB+c)/2;
                result = tmp+result;
                cnt++;
            }
            //如果最后的进位是1 那么在字符串前后添加1
            if(c==1)
                result = "1" + result;
            return result;
        }
    };
}



