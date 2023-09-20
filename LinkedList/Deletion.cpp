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

// deletion :
// 1) start node
// 2) node in between 
// 3) end node

// deleting the start node
void delete_start(node * &head){
    node * temp = head;
    head = head->next;
    free(temp);   //Make sure to free unused memory
}

// deleting the end node
void delete_end(node * &head){
    node * temp = head;
    node * prev = NULL;
    while(temp->next!=NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next =NULL;
    free(temp);
}

//deleting node in between
void delete_pos(node * &head, int pos){
    node * temp = head;
    node * prev = NULL;
    int i=1;
   if(pos == 1){
        head = head->next;
        free(temp);
   }

    else{
           while(i<pos)
           {
                prev = temp;
                temp = temp->next;
                i=i+1;
           }

        node *ptr = temp->next;
        prev->next = ptr;
        free(temp);
    }  
}

int main(){

    node *head = NULL;
    Insert_at_start(head,5);
    Insert_at_start(head,4);
    Insert_at_start(head,3);
    Insert_at_start(head,2);
    Insert_at_start(head,1);
    display(head);

    delete_start(head);
    display(head);

    delete_end(head);
    display(head);

    delete_pos(head,1);
    display(head);
    return 0;
}