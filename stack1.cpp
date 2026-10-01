//implementing stack using array 
#include <bits/stdc++.h>
using namespace std;
class Stack {
    int *arr;
    int top;
    int size;
public:
    Stack(int n){
        size=n;
        arr=new int[size];
        top=-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==size-1;
    }
    void push(int val){
        if (isFull()){
            cout<<"Overflow";
        }
        else{
            top=top+1;
            arr[top]=val;
            cout<<"Value pushed in stack is:"<<val<<endl;
        }
    }
    void pop(){
        if (isEmpty()){
            cout<<"Underflow";
        }
        else{
            cout<<"Deleted value is:"<<arr[top]<<endl;
            top=top-1;
        }
    } 
    void peek(){
        if (isEmpty()){
            cout<<"Underflow";
        }
        else{
            cout<<"Top value of stack is:"<<arr[top]<<endl;
        }
    }
    void display(){
        if (isEmpty()){
            cout<<"Underflow";
        }
        else{
            cout<<"Stack elements are:";
            for (int i=top; i>=0; i--){
            cout<<arr[i]<<endl;
            }
        cout<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    Stack s(n);
    int choice;
    do{
    cout<<"1-push"<<endl;
    cout<<"2-pop"<<endl;
    cout<<"3-peek"<<endl;
    cout<<"4-display"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            int val;
            cout<<"Enter val:";
            cin>>val;
            s.push(val);
            break;
        
        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;
        
        case 5:
            cout<<"Exiting..."<<endl;
            break;

        default:
            cout<<"invalid choice"<<endl;
            break;
    }
}while(choice!=5);
    return 0;
}

 