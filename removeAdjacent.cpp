#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s){
    int i=0,n=s.size();
    stack<char>st;
    while(i<n){
        if(st.empty()||st.top()!=s[i]){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
        i++;
    }

    string ans="";
    while(!st.empty()){
        char element=st.top();
        st.pop();
        ans+=element;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string str1 ="azzxzy";
    cout<<removeDuplicates(str1);
return 0;
}