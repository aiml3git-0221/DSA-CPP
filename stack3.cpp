#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(11);
    s.push(20);
    s.push(33);
    s.push(40);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    if (s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}   