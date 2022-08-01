#include<iostream>
using namespace std;
struct Book{
    string author;
    string title;
    string publisher;
    float price;
    int pos;
};
int main()
{
    struct Book list[3];
    for(int i=0; i<3;i++)
    {
        struct Book p;
        string author;
        string title;
        string publisher;
        float price;
        int pos;
        cout << "Enter: ";
        cin >> p.author >> p.title>>p.publisher>>p.price>>p.pos;
        list[i] = p;
    }
    string title, author;
    cout<<"search title: ";cin>>title>>author;
    for(int i=0;i<3;i++)
    {
        if(title==list[i].title&&author==list[i].author)
        {
            cout<<"available"<<endl;
            int a;
            cout<<"enter quantity: ";cin>>a;
            if(a<=list[i].pos)
            {
                cout<<"available"<<endl;
                cout<<"Total Price: "<<a*list[i].price<<endl;
                break;
            }
            
            else{
                cout<<"unavailable"<<endl;
                break;
            }
        }
    }

}