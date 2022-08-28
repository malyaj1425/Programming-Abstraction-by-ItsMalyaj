#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
};
void init_node(node *head,int n){
    head->data=n;
    head->next=NULL;
    head->prev=NULL;
}
void addfront(node *head,int n){
    node* newnode= new node;
    newnode->data=n;
    newnode->next=NULL;
    node* tmp=head;
    while (tmp)
    {
        if(tmp->next==NULL)
        {
            tmp->next=newnode;
            newnode->prev=tmp;
            return;
        }
        tmp=tmp->next;
    }
    
}
void addhead(node **head,int n){
    node *newnode=new node;
    newnode->data=n;
    newnode->next=*head;
    *head->prev=newnode;
    *head=newnode;
    
}
int main(){
    node* head=new node;
    init_node(head,1);
    addfront(head,2);
    cout<<head->next->prev->data;
    return 0;
}