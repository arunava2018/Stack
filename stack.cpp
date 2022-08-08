#include<iostream>
#include<stack>
using namespace std;
int main(){
    //create a stack
    stack<int>s;

    //push element
    s.push(2);
    s.push(45);
    s.push(78);
    
    //pop the element 
    s.pop();
    cout<<"The top element of the stack is : "<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
return 0;
}