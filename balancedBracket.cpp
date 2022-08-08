#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string str){
    stack<char>s;
    for(int i=0;i<str.length();i++){
        if(s.empty()){
            s.push(str[i]);
        }
        else if((s.top()=='('&& str[i]==')')  ||  (s.top()=='{' && str[i]=='}')  ||  (s.top()=='[' && str[i]==']')){
            s.pop();
        }
        else{
            s.push(str[i]);
        }
    }
        if(s.empty())
        {
            return true;
        }
        return false;
}
int main(){
    string expr = "{()}[]";
 
    // Function call
    if (isBalanced(expr)){
        cout << "Balanced";
    }
    else{
        cout << "Not Balanced";
    }

return 0;
}