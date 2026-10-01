#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string exp){
    stack <char> s;
    for(char ch:exp){
        if(ch=='('){
            s.push(ch);
        }
        else if(ch==')'){
            if(s.empty()){
                return false;
            }
            s.pop();
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string exp;
    cout<<"Enter exp:";
    cin>>exp;
    if(isBalanced(exp)){
        cout<<"Exp is balanced";
    }
    else{
        cout<<"Exp is not balanced";
    }
}