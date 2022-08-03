#include<iostream>
#include<stdlib.h>
using namespace std;
class a{
    public:
    int x;
    a(){
        cout<<"a"<<endl;
    }
};
class b:public a{
    public:
    b(){
        cout<<"b"<<x<<endl;
    }
};
class c:public a{
    public:
    c(){
        cout<<"c"<<x<<endl;
    }
};
class d:public b,public c{
    public:
    d(){
        cout<<"d"<<b::x<<endl;
    }
};
int main(){
    d obj;
    return 0;
}