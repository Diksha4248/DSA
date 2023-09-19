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

void search(node * &head, int ele){
    node *temp = head;
    while(temp->data != ele){
        temp = temp->next;
    }

    if(temp-> data == ele){
         cout<<"Element found"<<endl;
          cout<<"here";
    }
    else {
        cout<<"Element not found"<<endl;
    }
}
int main(){

    node *head = NULL;
    Insert_at_start(head,3);
    Insert_at_start(head,2);
    Insert_at_start(head,1);
    display(head);

    search(head,3);
    search(head,99);   // why this is not giving result ???
    return 0;
}