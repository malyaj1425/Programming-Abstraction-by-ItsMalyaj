#include <iostream>

using namespace std;
class Inches;
class Feet{
    public:
    int feet;
    int inches;
    Feet(int f=0, int i=0){
        feet = f;
        inches = i;
    }
    //FORWARD DECLARATION LAW-BREAK A WAR CRIME
    // Feet operator=(Inches &I)
    // {
    //     Feet temp;
    //     temp.feet= I.inches/12 + I.inches%12;
    //     return temp;
    // }
};

class Inches{
    int inches;
    
    public:
    Inches(int i=0){
        inches = i;
    }
    Inches(Feet &f){
        inches = f.feet*12 + f.inches;
    }
    Inches operator=(Feet &f){
        Inches tmp;
        tmp.inches = f.feet*12 + f.inches;
        return tmp;
    }
    
    void itf(){
        int r=inches%12;
        int temp=inches/12;
        cout<<temp<<"'"<<r<<endl;
        
    }
    void display(){
        cout << inches << '\n';
    }
};

int main(){
    Feet f(2,11);
    Inches i(f);
    i.display();
    Inches a(35);
    a.itf();
    Inches i2 = f;
    i2.display();
}