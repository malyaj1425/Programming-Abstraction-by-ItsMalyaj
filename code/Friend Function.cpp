#include<iostream>
#include<stdlib.h>

using namespace std;
 class Rectangle{
    private:
    int width, height;
    public:
    Rectangle(){}
    Rectangle(int x,int y):width(x),height(y){}
    int area(){return width*height;}
     friend Rectangle duplicate(const Rectangle &);
    int Compare(){}
 };
 Rectangle duplicate(const Rectangle& param)
    {
        Rectangle res;
        res.width=param.width*2;
        res.height=param.height*2;
        return res;
    }

int main(){
    cout<<"Friend Function"<<'\n';
// A friend function is able to access members without the need of inheriting the class.
// Friend function acts as a bridge between two classes by accessing their private data.
// It can be used to increase the versatility of overloaded operator.
// It can be declared either in the public or private or protected part of class.
    Rectangle foo;
    Rectangle bar(2,3);
    foo=duplicate(bar);
    cout<<foo.area()<<endl;
    return 0;
    
}