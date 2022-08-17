#include<iostream>
#include<stdlib.h>
using namespace std;
 class polygon{
    protected:
    int width,height;
    public:
    void set_val(int a,int b){
        width=a;
        height=b;
    }
    virtual int area()=0;
    void printarea(){
        cout<<this->area()<<"\n";
    }
 };
 class Rectangle: public polygon{
    public:
    int area(void){
        cout<<"area of rectangle: ";
        return(width*height);
    }
 };
 class Triangle: public polygon{
    public:
    int area(void){
        cout<<"area of triangle: ";
        return((width*height)/2);
    }
 };
int main(){
    Rectangle rect;
    Triangle tri;
    polygon *poly1=&rect;
    polygon *poly2=&tri;
    poly1->set_val(10,20);
    poly2->set_val(10,20);
    // cout<<"\n";
    // cout<<poly1->area();
    // cout<<"\n";
    // cout<<poly2->area();
    poly1->printarea();
    cout<<"\n";
    poly2->printarea();

    return 0;
}