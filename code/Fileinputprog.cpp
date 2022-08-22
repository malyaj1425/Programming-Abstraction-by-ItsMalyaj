#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
class Student{
    private:
    
    public:
    string name;
    int roll;
    Student(string a,int b){
        name=a;
        roll=b;
    }
    // void display(){
    //     cout<<name<<" "<<roll;
    // }


};
 
int main(){
    ofstream myfile;
    myfile.open("example.txt");
    myfile<<"Student Data:\n";
    myfile.close();
    string name;
    int n;
    cout<<"Enter Name: ";cin>>name;
    cout<<"Enter Roll: ";cin>>n;
    Student a1(name,n);
    // a1.display();
    myfile.open("example.txt");
    myfile<<"\nName: "<<a1.name<<"\n"<<"Roll No: "<<a1.roll<<"\n";
    myfile.close();
    

    return 0;
}