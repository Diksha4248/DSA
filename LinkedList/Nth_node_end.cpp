// Program for Nth node from the end of a Linked List

#include<bits/stdc++.h>
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

void insert_at_start(node * &head, int val){
    node * temp = new node(val);
    temp->next = head;
    head = temp;
}

void display(node* &head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

//program to find length of linked list
int len(node* &head){
    node *temp = head;
    int count=0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }

    return count;
}

// Time complexity: O(N) where N is the size of the linked list
// Auxiliary Space: O(1)
// Brute Force Approach

void ele_end(node* &head, int end_pos){
    int n = len(head);
    int pos = n-end_pos+1;     // position of node from start

    int i = 1;
    node * temp = head;
    while(i<pos){
        temp = temp->next;
        i = i+1;
    }

    if(end_pos > n) cout<<"The linkedlist has only "<<n<<" elements"<<endl;
    else cout<<"Nth Element from end is : "<<temp->data<<endl;
}

int main()
{
    node *head = NULL;
    insert_at_start(head,4);
    insert_at_start(head,3);
    insert_at_start(head,2);
    insert_at_start(head,1);
    
    display(head);

    ele_end(head,5);
    return 0;
}