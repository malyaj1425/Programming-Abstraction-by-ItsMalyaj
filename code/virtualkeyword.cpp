#include<iostream>
#include<stdlib.h>
using namespace std;
class b{
    public:
    int b;
    virtual void show(){
        cout<<"Show() in base\n";
        
    }
    void display(){
        cout<<"Show2() in base\n";
        
    }

};
class d:public b{
    public:
    int d;
    void show(){
        cout<<"Show() in Derived\n";
    }
};
 
int main(){
    // Base *bptr;
    // Base bobj;
    // bptr=&bobj;
    // bptr->b=10;
    // cout<<"Base Pointer->Base Obj\n";
    // bptr->display();
    // Derived dobj;
    // bptr=&dobj;
    // bptr->show();
    b *bptr;
    b bobj;
    bptr=&bobj;
    bptr->show();
    bptr->display();
    d *dptr;
    d dobj;
    bptr=&dobj;
    bptr->show();
    bptr->display();
    



    return 0;
}