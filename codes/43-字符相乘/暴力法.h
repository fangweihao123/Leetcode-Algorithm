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
    //收缩两边短板 因为收缩长板只会得到更小的值
   class Solution {
    public:
        string subMultiply(string num,char ch,int index){
            int a,b,remainder;
            int c = 0;
            string result;
            char tmp;
            for(int i=num.size()-1;i>=0;i--){
                a = num[i] - '0';
                b = ch - '0';
                remainder = (a*b+c)%10;
                c = (a*b+c)/10;
                tmp = remainder+'0';
                result = tmp + result ;
            }
            if(c!=0){
                tmp = c +'0';
                result = tmp + result;
            }
            for(int i=0;i<index;i++){
                result = result + '0';
            }
            return result;
        }

        string strAdd(string num1, string num2){
            int index = 0;
            int a,b,remainder;
            int c = 0;
            string result;
            char tmp;
            while(index<num1.size()||index<num2.size()){
                if(index<num1.size()){
                    a = num1[num1.size()-1-index] - '0';
                }else{
                    a = 0;
                }
                if(index<num2.size()){
                    b = num2[num2.size()-1-index] - '0';
                }else{
                    b = 0;
                }
                remainder = (a+b+c)%10;
                tmp = remainder+'0';
                result = tmp +result;
                c = (a+b+c)/10;
                index++;
            }
            if(c>0){
                tmp = c+'0';
                result = tmp + result;
            }
            return result;
        }

        string multiply(string num1, string num2) {
            string s = "0";
            if(num1=="0"||num2=="0")
                return s;
            for(int i=num2.size()-1;i>=0;i--){
                string result = subMultiply(num1,num2[i],num2.size()-1-i);
                //std::cout<<result<<std::endl;
                s = strAdd(s,result);
            }
            return s;
        }
    };
}



