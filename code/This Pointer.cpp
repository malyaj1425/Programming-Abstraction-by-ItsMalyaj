#include<iostream>
#include<stdlib.h>
using namespace std;
//without this
class Square{
    private:
    int side;
    public:
    Square(int s1=0)
    {
        side=s1;
    }
    int area() const
    {
        return side*side;
    }
    friend Square compareMax(const Square& ,const Square& );
    int compare(Square a1)
    {
        return this->area()>a1.area();
    }
};

Square compareMax(const Square &s1,const Square &s2)
{
    if(s1.area()>s2.area())
    {
        return s1;
    }
    else{
        return s2;
    }
}

int main(){
    cout<<"This Pointer"<<"\n";
    Square s1(5);
    Square s2(4);
    s1.area();
    s2.area();
    cout<<"Greater area is "<<compareMax(s1,s2).area()<<endl;
     if(s1.compare(s2)) {
      cout << "s2 is smaller than s1" <<endl;
   } else {
      cout << "s2 is equal to or larger than s1" <<endl;
   }
// Every object in C++ has access to its own address through an important pointer called this pointer. The this pointer is an implicit parameter to all member functions. Therefore, inside a member function, this may be used to refer to the invoking object.

// Friend functions do not have a this pointer, because friends are not members of a class. Only member functions have a this pointer.
    
    return 0;
}