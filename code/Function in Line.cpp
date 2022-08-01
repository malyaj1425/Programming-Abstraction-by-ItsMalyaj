#include<iostream>
#include<stdio.h>
#include<string>
#include <stdlib.h>
#include <array>
#include <algorithm>

using namespace std;
int operation(int x,int y,int(*function)(int,int))
{
    int g;
    g=(*function)(x,y);
    return g;
}
int operation(int x,int y,int z,int(*function)(int,int,int))
{
    int g;
    g=(*function)(x,y,z);
    return g;
}
int add(int x,int y)
{
    return x+y;

}
int add(int x,int y,int z)
{
    return x+y+z;

}
int sub(int x,int y)
{
    return x-y;
}
int main(){
    int x;
    int y;
    int z;
    int (*diff)(int,int)=sub;
    cin>>x>>y>>z;
    cout<<operation(x,y,add)<<endl;
    cout<<operation(x,y,z,add)<<endl;
    cout<<operation(x,y,sub)<<endl;
    cout<<operation(x,y,diff)<<endl;
    int (*funcall[])(int,int)={sub,add};
    cout<<(*funcall[0])(x,y)<<endl;

    
}
