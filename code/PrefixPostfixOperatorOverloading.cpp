#include<iostream>
#include<stdlib.h>
using namespace std;
class num{
    int x;
    public:
     num(){
        x=0;
     }
     void operator++(){
        x=x+1;
        cout<<"prefix \n";
        cout<<"Value: "<<x;
        cout<<"\n";
     }
     void operator++(int a){
        x=x+1;
        cout<<"postfix \n";
        cout<<"Value: "<<x;
        cout<<"\n";
     }
     void print(){
        cout<<"Value: "<<x;
        cout<<"\n";
     }
};
 
int main(){
    num n;
    n.print();
    ++n;
    n++;
    return 0;
}