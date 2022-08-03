#include<iostream>
#include<stdlib.h>
using namespace std;
 //Inheritance base->D1 public base private-->x protected-->protected public-->public
 //base->D2 protected base class private->x protected&public-->public
 //D2 protected base class->child private class protected&public-->private
 //D1 base->child protected protected&public-->protected

 //Class D1 Virtual Public Base
 //Class D2 Virtual Protected Base

//"individual will bring all heirarchal base class elements after memory allocation" i think not sure
class a{
    int val;
    public:
    a(int y)
    {
        val=y;
        cout<<"a called!"<<val<<endl;
    }
};
class b:public a{
    public:
    int valb;
    b(int b,int x):a(x)
    {
        valb=b;
        cout<<"b called!"<<valb<<endl;
    }

};
class c: public b{
    public:
    c(int v,int v2):b(v,v2)
    {
        cout<<"c called"<<endl;
    }
};
int main(){
    c obj(7,9);
    return 0;
}