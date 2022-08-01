#include <iostream>
using namespace std;
struct Product{
    string name;
    double price;
    float weight;

};
struct Movies{
    string name;
    int year;
};
struct friends_t{
    string name;
    Movies fav;
};
int main()
{
    // int n;
    // cout<<"enter no of items: ";cin>>n;
    // struct Product products[n];
    // for(int i=0; i<n;i++)
    // {
    //     struct Product p;
    //     string name;
    //     int price,weight;
    //     cout << "Enter: ";
    //     cin >> p.name >> p.price>>p.weight;
    //     products[i] = p;
    // }
    // struct Product *Pp=&products[0];
    // cout<<(Pp->name)<<endl;
    Movies a1={"POC",2012};
    friends_t b1={"john",a1};
    cout<<b1.fav.name<<endl;

}