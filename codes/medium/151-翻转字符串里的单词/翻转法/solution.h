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
        string reverseWords(string s) {
            if(s.size()==0||s==" ")
                return s;
            //转置原来的string
            reverse(s.begin(),s.end());
            //去除多余的空格
            int l = 0;
            int r = s.size()-1;
            while(s[l]==' '){
                if(l<s.size()-1)
                    l++;
                else
                    break;
            }
            while(s[r]==' '){
                if(r>0)
                    r--;
                else
                    break;
            }
            int len = r-l+1>=0?r-l+1:0;
            s = s.substr(l,len);
            vector<string> vec;
            int pre = 0;
            string tmp;
            for(int i=0;i<s.size();i++){
                //如果i-1大于0的话
                if(i-1>=0){
                    if(s[i]==' '&&s[i-1]!=' '){
                        tmp = s.substr(pre,i-pre);
                        reverse(tmp.begin(),tmp.end());
                        vec.push_back(tmp);
                    }else if(s[i]!=' '&&s[i-1]==' '){
                        pre = i;
                    }
                }
            }
            tmp = s.substr(pre,s.size()-pre);
            reverse(tmp.begin(),tmp.end());
            vec.push_back(tmp);
            string result="";
            for(int i=0;i<vec.size();i++){
                if(i>0){
                    result += ' ';
                }
                result += vec[i];
            }
            return result;
        }
    };
}



