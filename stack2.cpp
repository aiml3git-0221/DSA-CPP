//implement stack using linked list
#include <iostream> 
using namespace std;
class Node{
public:
    int data;
    Node* next;  
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Stack{
   Node* top;
public:
    Stack(){
    top=NULL;
    }
bool isEmpty(){
    return top==NULL;
}
void Push(int val){
    Node* newnode= new Node(val);
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}
void pop(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return;
    }
    Node* temp=top;
    cout<<"Popped value:"<<temp->data<<endl;
    top=top->next;
    delete temp;
}
void peek(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"Top value:"<<top->data<<endl;
}
void display(){
    if(isEmpty()){
        cout<<"Stack is empty";
        return;
    }
    Node* temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main(){
    Stack s;
    int choice, val;
    do{
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Peek\n";
        cout<<"4. Display\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter value to push: ";
                cin>>val;
                s.Push(val);
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
                cout<<"Exiting the program."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice!=5);
    return 0;
}
