#include <bits/stdc++.h>
using namespace std;
  
/* Link list node */
class Node 
{ 
    public:
    int data; 
    Node* next; 
}; 
  
/* pull off the front node of 
the source and put it in dest */
void MoveNode(Node** destRef, Node** sourceRef); 

Node *sortedmerge(Node* a,Node* b){
    Node dummy;
    Node* temp=&dummy;
    dummy.next==NULL;
    while(true){
        if(a==NULL){
            temp->next=b;
            break;
        }
        if(b==NULL){
            temp->next=a;
            break;
        }
        if(a->data<=b->data){
            MoveNode(&(temp->next),&a);
        }
        else{
            MoveNode(&(temp->next),&b);
        }
        temp=temp->next;
    }
    return(dummy.next);
}
void MoveNode(Node**dest,Node**src){
    Node* newnode=*src;
    assert(newnode!=NULL);
    *src=newnode->next;
    newnode->next=*dest;
    *dest=newnode;
}
void push(Node** head_ref, int new_data) 
{ 
    /* allocate node */
    Node* new_node = new Node();
  
    /* put in the data */
    new_node->data = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref) = new_node; 
} 
  
/* Function to print nodes in a given linked list */
void printList(Node *node) 
{ 
    while (node!=NULL) 
    { 
        cout<<node->data<<" "; 
        node = node->next; 
    } 
}
int main(){
    /* Start with the empty list */
    Node* res = NULL; 
    Node* a = NULL; 
    Node* b = NULL; 
  
    /* Let us create two sorted linked lists  
    to test the functions 
    Created lists, a: 5->10->15, b: 2->3->20 */
    push(&a, 15); 
    push(&a, 10); 
    push(&a, 5); 
  
    push(&b, 20); 
    push(&b, 3); 
    push(&b, 2); 
  
    /* Remove duplicates from linked list */
    res = sortedmerge(a, b); 
  
    cout << "Merged Linked List is: \n"; 
    printList(res); 
  
    return 0; 
}