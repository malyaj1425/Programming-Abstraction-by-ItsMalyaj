#include<iostream>
#include<stdlib.h>
using namespace std;
 class polygon{
    protected:
    int width,height;
    public:
    // void set_val(int a,int b){
    //     width=a;
    //     height=b;
    // }
    // virtual int area()=0;
    // void printarea(){
    //     cout<<this->area()<<"\n";
    // }
    polygon(int a,int b):width(a),height(b){}
    virtual int area()=0;
    void printarea(){
        cout<<this->area()<<"\n";
    }
 };
 class Rectangle: public polygon{
    public:
    Rectangle(int a,int b):polygon(a,b){}
    int area(){
        return(height*width);
    }
 };

int main(){
    //dynamic allocation mem
    polygon *poly1=new Rectangle(10,20);
    poly1->printarea();
    delete poly1;
    return 0;
}