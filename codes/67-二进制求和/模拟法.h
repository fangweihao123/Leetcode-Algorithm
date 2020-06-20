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



    //����Ϊ �ǿ� �ַ�����ֻ�������� 1 �� 0
    class Solution {
    public:
        string addBinary(string a, string b) {
            //miniLen���������ַ�������̵ĳ��� �����շ�������
            //����޷�������� 0+0=0 1+0=1 1+1=0 ��һλ
            int cnt = 1;
            int c = 0;
            int aLen = a.size();
            int bLen = b.size();
            int tmpA,tmpB;
            string result = "";
            //�������ĳ���û�дﵽ���ַ����ĳ���ʱ�� ��������
            while(cnt<=aLen||cnt<=bLen){
                //ȡ��ǰ�ַ������ַ�
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
            //������Ľ�λ��1 ��ô���ַ���ǰ�����1
            if(c==1)
                result = "1" + result;
            return result;
        }
    };
}



