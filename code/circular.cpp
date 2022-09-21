#include<iostream>
#include<stdlib.h>
using namespace std;
class queue{

    public:
    int *arr,front,rear,cap,count;
    queue(int size=1000){
        arr=new int[size];
        cap=size;
        front=-1;
        rear=-1;
        count=0;
    }
    int deq();
    void enq(int x);
    int peekf();
    int peekl();
    int size();
    bool isEmpty();
    bool isFull();
};
bool queue::isEmpty(){
    if(front==-1){
        return true;
    }
    else{
        return false;
    }
}
bool queue::isFull(){
    if(front==0&&rear==cap-1){
        return true;
    }
    if(front==rear -1){
        return true;
    }
    else{
        return false;
    }
}

int queue::size(){
    return count;
}

void queue::enq(int x){
    if(isFull()){
        cout<<"OverFlow!\n";
    }
    else{
        if(front==-1){
            front=0;
        }
        else{
            rear=(rear+1)%cap;
            arr[rear]=x;
        }
    }
}

int queue::deq(){
    int element;
    if(isEmpty()){
        cout<<"UnderFlow!\n";
    }
    else{
        element=arr[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else {
        front = (front + 1) % cap;
      }
      return(element);
    }
}

int queue::peekf(){
    return arr[front];
}
int queue::peekl(){
    return arr[rear];
}
int main(){
    queue obj(3);
    obj.enq(1);
    obj.enq(2);
    obj.enq(3);
    obj.deq();
    int x=obj.peekf();
    cout<<x;
    return 0;
}