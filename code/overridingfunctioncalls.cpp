#include<iostream>
#include<stdlib.h>
using namespace std;
class Base{
    public:
    int b;
    int c;
    Base(){
        c=34;
    }
    void show(){
        cout<<"Show Base Class\n";
        cout<<"b= "<<b<<"\n";

    }
};
class Der:public Base{
    public:
    int d;
    void show(){
        //Base::show();
        cout<<"Show() Der Class\n";
        cout<<"b= "<<b<<"\n"<<"d= "<<d<<"\n";
        cout<<c;
    }
};
class Der2:
int main(){
    Der obj;
    obj.show();
    
    return 0;
}