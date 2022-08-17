#include<iostream>
#include<stdlib.h>
using namespace std;
class b{
    public:
    void show(){
        cout<<"Ola";
    }

};
class d:public b{
    public:
    void show(){
        cout<<"Ola!";
        }
};
int main(){
    d *obj;
    // obj.show();
    obj->show();

    b *objb;

    objb->show();

    return 0;
}