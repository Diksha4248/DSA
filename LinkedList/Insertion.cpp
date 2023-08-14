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

void Insert_at_end(node* &head, int val){

    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void display(node * head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}


int main(){

    node * head = NULL;
    Insert_at_end(head,1);
    Insert_at_end(head,2);
    Insert_at_end(head,3);
    display(head);
    
    return 0;
}