#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node *top;
void push(int data){
    node *tmp = new node;
    if(!tmp){
        printf("stack overflow!");
        exit(1);
    }
    tmp->data=data;
    tmp->next=top;
    top=tmp;
}
void pop()
{
    node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}
void display()
{
    node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
}
int main(){ 
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    cout << endl;
    pop();
    pop();
    display();
    return 0;
}