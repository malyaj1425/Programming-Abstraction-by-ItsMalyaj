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
void display(node *head) {
	node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
}
int detect(node *head){
    node* slow=head;node* fast=head;
    while(slow->next&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"FOUND A LOOP"<<endl;
            return 1;
        }
    }
    return 0;
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
void loop(node *head){

}
int main(){
    node *head=new node;
    init_node(head,1);
    addTail(head,2);
    addTail(head,3);
    addTail(head,4);
    head->next->next->next = head->next;
    detect(head);

    return 0;
}