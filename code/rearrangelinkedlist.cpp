#include <iostream>
#include <stdlib.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

void node_innit(node *head,int n){
    head->data=n;
    head->next=NULL;
}
void add(node *head, int n) {
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

void display(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void rearrange(node *head)
{
    int arr1[]
    node *tmp = head;
    while (tmp)
    {
        if (tmp->data % 2 == 0)
        {
            if (even->next==NULL){
                even->data=tmp->data;
            }
            else{
                add(even,tmp->data);
            }
        }
        else{
            if (odd->next==NULL){
                odd->data=tmp->data;
            }
            else{
                add(odd,tmp->data);
            }
        }
        tmp=tmp->next;
        
    }
    cout<<endl;
    display(even);
    display(odd);
    // node* tmp2=odd;
    // while(tmp2){
    //     if(tmp2->next==NULL){
    //         tmp2->next=even;
    //     }
    //     tmp2=tmp2->next;
    // }
    // display(odd);
}
int main()
{
    

    node* head=new node;
    node_innit(head,1);
    add(head,2);
    add(head,1);
    add(head,2);
    display(head);
    rearrange(head);

    return 0;
}