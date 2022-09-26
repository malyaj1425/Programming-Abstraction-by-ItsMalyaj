#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int width, height;
    public:
    rectangle();
    rectangle(int,int);
    void set(int a,int b){
        width=a;
        height=b;
    }
    int area(){
        return width*height;
    }

};

rectangle::rectangle(int x,int y):width(x),height(y){};
int main(){
    rectangle obj={3,4};
    int ans=obj.area();
    cout<<ans;
    return 0;
}