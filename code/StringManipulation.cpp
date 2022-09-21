#include <iostream>
#include <stdlib.h>
#include <bits\stdc++.h>
#include <string>
using namespace std;

int main()
{
    // simple string implementation and string's value removal
    string a1 = "DarthVader";
    cout << a1 << endl;
    a1.erase();
    a1 = "DarthMaul";
    cout << a1 << endl;
    a1.erase();
    a1 = "Hoth";
    string a2;
    // inbuilt getline function for spaces in between input
    //  getline(cin,a2);
    cout << a2 << endl;
    // character datatype implementation
    char a3;
    a3 = 'warstar';
    cout << a3 << endl;
    // basic constructors for string class
    string a4("obiwankenobi");
    cout << a4 << endl;
    string a5(a4);
    cout << a5 << endl; // copy constructor
    string a6("AnakinSkywalker");
    string a7(a6, 6);
    string a8(a6, 0, 6);
    cout << a7 << " " << a8 << endl;
    string a9(a6.begin(), a6.begin() + 7);
    cout << a9 << endl;
    string s6a(10, 'A');
    cout << s6a <<" "<<s6a.length()<<endl;
    string a10, a11, a12;
    // operators on string & cstring functions
    a10 = "Luke";
    a11 = " Skywalker";
    a12 = a10 + a11;
    cout << a12 << endl;
    string a14 = "ReyPalpatine";
    string a13("Rey Skywalker");
    a14.replace(3, 9, a13, 3, 10);
    cout << a14 << endl;
    string str = "May The Force Be With You";
    
    string str2 = str.substr(0, 4);

    size_t pos = str.find("Force");

    string str3 = str.substr(pos);

    cout << str2<<endl;
    cout<<pos<<endl;

    //ignore funtion
    char strs[80];
    cin.ignore();
    cin.getline(strs,80);
    cout<<strs<<endl;




    return 0;
}