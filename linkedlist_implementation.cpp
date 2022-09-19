#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    Node(int val){
        val=data;
        next=NULL;

    }
};

void display(Node *head){
    Node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAthead(Node * &head, int val){

    Node *newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
    
}

void insertAttail(Node* &head, int val){
    Node *newnode=new Node(val);
    if(head->next==NULL){
        head=newnode;
        return;
    }

    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return;
    
}

int main(){
    Node *head=NULL;
    // insertAthead(head,12);
    // insertAthead(head,22);
    // insertAthead(head,32);
    // insertAthead(head,42);
    // insertAthead(head,52);

    insertAttail(head,12);
    insertAttail(head,22);
    insertAttail(head,32);
    
    display(head);
}