#include<iostream>
#include<stdlib.h>

using namespace std;
class node{
    public:
    int data;
    node* next;
};
void init_node(node *head,int n){
    head->data=n;
    head->next=NULL;
}
void addHead(node **head,int n){
    node *newnode=new node;
    newnode->data=n;
    newnode->next=*head;
    *head=newnode;
}
void addTail(node *head, int n) {
	node *node_ = new node;
	node_->data = n;
	node_->next = NULL;
	node *tmp = head;
	while(tmp) {
		if(tmp->next == NULL) {
			tmp->next = node_;
			return;
		}
		tmp = tmp->next;
	}
}
void search(node *head,int n){
    node *tmp=head;
    while(tmp){
        if(tmp->data==n){
            cout<<"Found It"<<endl;
            return;
        }
        tmp=tmp->next;
    }
}
void addbw(node *head,int d,int n){
    node *newnode= new node;
    newnode->data=n;
    node *tmp=head;
    while(tmp){
        if(tmp->data==d){
            newnode->next = tmp->next;
            tmp->next=newnode;
            cout<<"Changed\n";
            return;
        }
        tmp=tmp->next;
    }

}
void display(node *head) {
	node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
}
int main(){
    node *head=new node;
    init_node(head,1);
    addTail(head,20);
    addTail(head,30);
    addTail(head,40);
    addHead(&head,50);
    display(head);
    search(head,20);
    addbw(head,20,69);
    display(head);
    return 0;
}