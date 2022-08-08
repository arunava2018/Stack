#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int postFixEvaluation(string st){
    stack<int>s;
    for(int i=0;i<st.length();i++){
        if(st[i]>='0' && st[i]<='9'){
            s.push(st[i]-'0');  //convert the string into integer
        }
        else{
            int op2=s.top();
            s.pop();
            int op1=s.top();
            s.pop();
            switch(st[i]){
                case '+':
                  s.push(op1+op2);
                  break;
                case '-':
                  s.push(op1-op2);
                  break;
                case '/':
                  s.push(op1/op2);
                  break;
                case '*':
                  s.push(op1*op2);
                  break;
                case '^':
                  s.push(pow(op1,op2));
                  break; 
            }
        }
    }
    return s.top();
}
int main(){
    cout<<postFixEvaluation("46+2/5*7+")<<endl;
return 0;
}