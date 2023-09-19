#include <bits/stdc++.h>
using namespace std;


class node{
    public: 
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }   

};

// Insertion at the end of the linked list

void Insert_at_end(node* &head, int val){

    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;
}

// Insertion at the beginning of the linked list
void Insert_at_start(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}


//Insertion before a given position
void insert_before_node(node* &head, int val,int pos){
    // node *p,*a = head;
    node * n = new node(val);
    node * temp = head;

    // if(head->data == ele){
    //     temp->next = head;
    //     head = temp;
    // }

    // else{
    //     a = p->next;
    //     while((p->next)->data != ele){
    //         p = p->next;
    //         a = a->next;
    //     }

    //     temp->next = a;
    //     p->next = temp;
    // }

    if(head == NULL){
        n = head;
    }

    int i = 1;
    while(i<pos){
        temp = temp->next;
        i=i+1;
    }

    n->next = temp->next;
    temp->next = n;
}

void display(node *head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}


int main(){

    node *head = NULL;
    Insert_at_end(head,1);
    Insert_at_end(head,2);
    Insert_at_end(head,3);
    display(head);
    Insert_at_start(head,88);
    display(head);

    insert_before_node(head,99,3);
    display(head);
    
    return 0;
}