#include<iostream>
#include<stdlib.h>
using namespace std;
//CopyConstructor
//  Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
// Copy constructor takes a reference to an object of the same class as an argument.
//           Sample(Sample &t)
//           {
//                      id=t.id;
//           }
//  The process of initializing members of an object through a copy constructor is known as copy initialization.
// It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to the same class on a member by member copy basis.
// The copy constructor can be defined explicitly by the programmer. If the programmer does not define the copy constructor, the compiler does it for us.
class temp{
    int a, b;
    public:
    temp(int a1, int b1)
    {
        a = a1;
        b = b1;cout<<"Default Constructor called"<<endl;
    }
    temp(const temp&p1)
    {
        a=p1.a;
        b=p1.b;
        cout<<"Copy Constructor called"<<endl;
    }
    void operator=(const temp&p2)
    {
        this->a=p2.a*2;
        this->b=p2.b*2;
        cout<<"Assignment Operator called"<<endl;
        
    }
    int getX() { return a; }
    int getY() { return b; }
};
int main(){
    temp p1(10, 15); // Normal constructor is called here
    temp p2 = p1; // Copy constructor is called here
    temp p4(13,23);
    temp p3 =p1;
    p3=p2;
    

    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX()
         << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX()
         << ", p2.y = " << p2.getY();
    cout << "\np3.x = " << p3.getX()
         << ", p3.y = " << p3.getY();
  
    return 0;

}