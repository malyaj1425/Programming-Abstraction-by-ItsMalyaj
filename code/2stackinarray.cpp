#include<iostream>
#include<stdlib.h>
using namespace std;
class TwoStack{
    int* arr;
    int size;
    int top1,top2;
    public:
    TwoStack(int n){
        size=n;
        arr=new int[n];
        top1=n/2+1;
        top2=n/2;
    }
    void push1(int x){
        if(top1>0){
            top1--;
            arr[top1]=x;
        }
        else{
            return;
        }
    }
    void push2(int x){
        if(top2<size-1){
            top2++;
            arr[top2]=x;
        }
        else{
            return;
        }
    }
    int pop1(){
        if(top1<=size/2){
            int x=arr[top1];
            top1++;
            return x;
        }
        else{
            return;
        }
    }
    int pop2(){
        if(top2>=size/2+1){
            
        }
    }
};
int main(){

    return 0;
}