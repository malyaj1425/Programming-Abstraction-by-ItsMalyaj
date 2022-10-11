#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* top;
void nodeinit(node* head,int data){
    head->data=data;
    head->next=NULL;
    top=head;
}
void addhead(node** head,int data){
    node* newnode=new node;
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;
    top=newnode;
}
void pop(node** head){
    node* deletenode=top;
    top=top->next;
    free(deletenode);
}
void display(node* head){
    node* tmp=top;
    cout<<tmp->data<<endl;

}
int main(){
    node* head=new node;
    nodeinit(head,5);
    display(head);
    addhead(&head,4);
    display(head);
    addhead(&head,3);
    addhead(&head,2);
    addhead(&head,1);
    pop(&head);
    display(head);

    return 0;
}