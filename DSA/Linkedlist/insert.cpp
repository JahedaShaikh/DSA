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

void insertAttail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAfter(node* &head, int val, int pos){
    node* n=new node(val);
    node* p=head;
    int i=0;
    while(i!=pos-1){
        p=p->next;
        i++;
    }
    n->next=p->next;
    p->next=n;
}
int main(){
    node* head=NULL;
    
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 4);
    display(head);
    insertAthead(head, 8);
    display(head);
    insertAfter(head,7,3);
    display(head);


    return 0;
}