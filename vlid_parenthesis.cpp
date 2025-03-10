#include<iostream>
using namespace std;
#include <stack>
bool valid (string s){
stack<char>st;
bool r = true;
for(int i = 0;i<s.size(); i++){
    if(s[i] == '[' || s[i] == '{' || s[i] == '('){
        st.push(s[i]);
    }
    else if(s[i]== ']'){
        if(!st.empty()&& st.top()=='['){
            st.pop();
        }
        else{
            r=false;
            break;
        }

    }
    else if(s[i]=='}'){
        if(!st.empty() && st.top()=='{'){
            st.pop();
        }
        else{
            r=false;
            break;
        }
    }
    else if(!st.empty() ==')'){
        if(!st.empty() && st.top()== '('){
            st.pop();
        }
        else{
            r=false;
            break;
        }
    }
}

if(!st.empty()){
    return false;
}
else{
    return r;
}

}
int main(){
    string s;
    cout << "Enter the Combination of brackets " << "\n";
    cin>>s;
    if(valid(s)){
        cout << "valid" << "\n";
    }
    else{
        cout << "Invalid" << "\n";
    }
}