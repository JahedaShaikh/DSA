#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void display(node* &head){
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);

    cout<<endl;

}
void insertAtfirst(node* &head,int val){
    node* n=new node(val);
    node* temp=head->next;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
    return;
}

int main(){
    node*head=NULL;
    insertAtfirst(head,1);
    insertAtfirst(head,2);
    insertAtfirst(head,3);
    insertAtfirst(head,4);
    insertAtfirst(head,5);
    display(head);


    return 0;
}