#include<iostream>
using namespace std;

template<class T>
struct  node{
    T data;
    node * next;
};

template<class T>
node<T>* node_init(T data, node<T> *ptr=nullptr){
    node<T> *tmp = new node<T>;
    tmp->data = data;
    tmp->next = ptr;
    return tmp;
}

int main(){
    node<int> *head = node_init(12);
    head->next = node_init(9);
    head->next->next = node_init(55);

    node<int> *tmp = head;
    while(tmp != nullptr){
        cout<< tmp->data << "\n";
        tmp = tmp->next;
    }   
    return 0;
}