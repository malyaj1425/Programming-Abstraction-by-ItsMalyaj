#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void nodeinit(node* head,int data){
    head->data=data;
    head->next=NULL;
}

void addtail(node* head,int data){
    node* newnode=new node;
    newnode->data=data;
    newnode->next=NULL;
    node* temp;
    temp=head;
    while(temp){
        if(temp->next==NULL){
            temp->next=newnode;
            return;
        }
        temp=temp->next;
    }
}
void addhead(node** head,int data){
    node* newnode=new node;
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;
}

int main(){

    return 0;
}