#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    // node(int val){
    //     data=val;
    //     next=NULL;

    // }
};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    // insertAtend(head, 1);
    // insertAtend(head, 2);
    // insertAtend(head, 3);
    display(head);


    return 0;
}