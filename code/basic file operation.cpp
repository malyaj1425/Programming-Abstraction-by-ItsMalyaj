#include<iostream>
#include <fstream>
using namespace std;
 
int main(){
    ofstream myfile;
    myfile.open("example.txt");
    myfile<<"Writing to this file\n";
    myfile.close();

    return 0;
}