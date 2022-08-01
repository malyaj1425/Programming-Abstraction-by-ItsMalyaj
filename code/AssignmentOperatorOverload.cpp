#include<iostream>
#include<stdlib.h>
using namespace std;

class Distance{
    int feet;
    int inches;
    public:
    Distance(){
        feet=0;
        inches=0;
   }
    Distance(int f,int i){
        feet=f;
        inches=i;
    }
    void operator=(const Distance &D)
    {
        feet=D.feet;
        inches=D.inches;
    }
    void display()
    {
        cout<<"feet: "<<feet<<endl;
        cout<<"inches: "<<inches<<endl;
    }
    Distance(const Distance &D)
    {
        feet=D.feet;
        inches=D.inches;
        cout<<"Copy Const Called!!"<<endl;
    }
};
 
int main(){
    Distance D1(11,10),D2(5,11);
    D1=D2;
    Distance D3(D2);
    D3.display();
    return 0;
}