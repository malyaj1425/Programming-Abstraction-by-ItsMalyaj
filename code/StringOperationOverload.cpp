#include<iostream>
using namespace std;
#include <cstring>

class Str
{
    /* data */
    char *p;
    int len;
public:
    Str(){
        len = 0;
        p = 0;
    }
    
    int strlen(string x){
        int n = x.length();
        return n;
    }
    // string strcpy(string x){
    // }
    Str(const char* t){
        len = strlen(t);
        p = new char[len+1];
        strcpy(p, t);
    }
    Str(const Str &s){
        len = s.len;
        p = new char[len+1];
        strcpy(p,s.p);
    }

    void printString(){
        cout<<"The string is ::->"<<p;

    }
    friend Str operator+(const Str &s1,const Str &s2);
    friend int operator<=(const Str &s1,const Str &s2);

};
Str operator+(const Str &s1,const Str &s2){
    Str temp;
    temp.len=s1.len+s2.len;
    temp.p=new char[temp.len+2];
    strcpy(temp.p,s1.p);
    strcat(temp.p," ");
    strcat(temp.p,s2.p);
    return temp;
}

int operator<=(const Str & s1,const Str & s2){
    int m=s1.len;
    int n=s2.len;
    if(m>n)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char *c1 = (char*)"abcdef";
    char *c2 = (char*)"abc";
    Str s1(c1),s2(c2);
    if(s1 <= s2)
    {
        cout<<"s1 << s2";
    }
    else{

    }
    return 0;
    return 0;
}