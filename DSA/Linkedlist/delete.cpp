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
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void deleteFirst(node* &head){
    node* dn=head;
    head=head->next;
    delete dn;
}
void deleteLast(node* &head){
    node* p=head;
    node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    delete q;

}

void deleteAtindex(node* &head, int index){
    node* p=head;
    node* q=head->next;
    for(int i=0; i<index-1; i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    delete q;
}

void deleteVal(node* &head, int val){
    node* p=head;
    node* q=head->next;
    while(q->data!=val && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==val){
        p->next=q->next;
        delete q;
    }
    return;
}

int main(){
    node* head=NULL;
    insertAthead(head,1);
    insertAthead(head,2);
    insertAthead(head,3);
    insertAthead(head,4);
    insertAthead(head,5);
    display(head);
    // deleteFirst(head);
    // display(head);
    // deleteLast(head);
    // display(head);
    // deleteAtindex(head,2);
    // display(head);

    deleteVal(head,4);
    display(head);


    return 0;
}