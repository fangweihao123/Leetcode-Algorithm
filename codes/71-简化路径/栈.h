#include<vector>
#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
#include<gtest/gtest.h>
using namespace std;

namespace slution{
    //can not end with / except root directory
   class Solution {
    private:
        stack<string> pathStack;
        string tmp;
    public:
        string simplifyPath(string path) {
            if(path[path.size()-1] != '/')
                path += '/';
            for(int i=0;i<path.size();i++){
                if(path[i] == '/'){
                    if(i==0){}
                    else if(tmp=="."||path[i-1] == '/'){}
                    else if(tmp==".."){
                        if(!pathStack.empty())
                            pathStack.pop();
                    }else{
                        pathStack.push(tmp);
                    }
                    tmp = "";
                }else{
                    tmp += path[i];
                }
            }
            tmp = "";
            if(pathStack.empty())
                tmp = "/";
            while(!pathStack.empty()){
                tmp = "/" + pathStack.top() + tmp;
                pathStack.pop();
            }
            return tmp;
        }
    };
}



