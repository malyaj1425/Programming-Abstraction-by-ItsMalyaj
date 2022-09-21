#include<iostream>
#include<stdlib.h>
using namespace std;
class queue{

    public:
    int *arr,front,rear,cap,count;
    queue(int size=1000){
        arr=new int[size];
        cap=size;
        front=0;
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
    return(size()==0);
}
bool queue::isFull(){
    return(size()==cap);
}

int queue::size(){
    return count;
}

void queue::enq(int x){
    if(isFull()){
        cout<<"OverFlow!\n";
    }
    else{
        rear++;
        arr[rear]=x;
        count++;
    }
}

int queue::deq(){
    if(isEmpty()){
        cout<<"UnderFlow!\n";
    }
    else{
        int x=arr[front];
        front++;
        count--;
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