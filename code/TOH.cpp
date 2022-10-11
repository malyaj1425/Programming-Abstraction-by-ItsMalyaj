#include<iostream>
#include<stdlib.h>
#include<stack>
#include<math.h>
using namespace std;
void move(stack<int> src,stack<int> dest){
    int p1=src.top();
    src.pop();
    int p2=dest.top();
    dest.pop();

    if(p1==INT_MIN){
        src.push(p2);
    }
    else if(p2==INT_MIN){
        dest.push(p1);
        }
    else if(p1>p2){
        src.push(p1);
        src.push(p2);
    }
    else{
        dest.push(p1);
        dest.push(p2);
    }
}
void iter(int diskno,stack<int> src,stack<int> aux,stack<int> dest,int count){
    int i,noofmoves;
    noofmoves=pow(2,diskno)-1;
    for(i=diskno;i>=1;i--){
        src.push(i);
    }
    
    for(i=1;i<=noofmoves;i++){
        
        if(i%3==1){
            move(src,dest);
        }
        else if(i%3==2){
            move(src,aux);
            if(i==2){
                count++;
                cout<<count;
            }
        }
        else if(i%3==0){
            move(aux,dest);
        }
    }
    
}
int main(){
    int size=3;
    int count=0;
    stack<int> src;
    stack<int> aux;
    stack<int> dest;
    iter(size,src,aux,dest,count);
    return 0;
}