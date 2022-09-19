#include<iostream>
// #include<stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    int isEmpty(){
        return top==-1;
    }
    void push(int elem){
        if(top==size-1){
            cout<<"stack overloading";
            return;
        }
        top++;
        arr[top]=elem;
        int val=arr[top];
        cout<<"push: "<<top<<" "<<val<<endl;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack underflow";
            return;
        }
        cout<<"pop:  "<<top--<<endl;
    }
    int Top(){
        if(isEmpty()){
            cout<<"top element ";
            return -1;
        }
        return arr[top];
    }
};


int main(){
    Stack s1(5);
    s1.push(12);   
    s1.push(22);   
    s1.push(32);   
    s1.push(42);   
    s1.push(52);

    s1.pop();

    cout<<"top val: "<<s1.Top();



}