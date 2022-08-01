#include<iostream>
#include<stdlib.h>
using namespace std;
 class student{
    string name;
    float age;
    public:
     student(){
       cout<<"Const Called! \n";
     }
     student(string name,float age){
        this->name=name;
        this->age=age;
     }
     void display(){
        cout<<name<<endl;
        cout<<age<<endl;
     }
     void * operator new(size_t size){
        cout<<"Overloading new operator with size: "<<size<<endl;
        void * p = ::operator new(size);
        return p;
     }
     void operator delete(void *p){
        cout<<"Overloading delete operator"<<endl;
        free(p);
     }

 };
int main(){
    student * p =new student("C plus plus",4);
    p->display();
    delete p;
    return 0;
}