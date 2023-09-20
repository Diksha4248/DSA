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

void Insert_at_start(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void display(node *head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

bool search(node * &head, int ele){
    node *temp = head;
    while(temp->next != NULL){
        if(temp->data == ele) return true;
        temp = temp->next;    
        }

    if(temp->next == NULL && temp->data == ele) return true;    // or directly use while(temp!= NULL) in the above code to avoid writing this line
    else return false;
}
int main(){

    node *head = NULL;
    Insert_at_start(head,3);
    Insert_at_start(head,2);
    Insert_at_start(head,1);
    display(head);

    cout<<search(head,3);
    cout<<search(head,99);  
    return 0;
}