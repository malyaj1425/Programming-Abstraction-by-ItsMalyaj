#include<iostream>
#include<stdlib.h>
using namespace std;
#define N 4;
class Kitab{
    private:
    public:
    float price;
    string author;
    string title;
    string publisher;
    int stock;
};
class Inventory{
    Kitab books[4];
    int numBooks;
    int currBooks;
    public:
    void Inventorys(string title,string author);
};
void Inventory::Inventorys(string title,string author)
{
    for(int i=0;i<3;i++)
    {
        if(title==books[i].title&&author==books[i].author)
        {
            cout<<"available"<<endl;
            int a;
            cout<<"enter quantity: ";cin>>a;
            if(a<=books[i].stock)
            {
                cout<<"available"<<endl;
                cout<<"Total Price: "<<a*books[i].price<<endl;
                break;
            }
            
            else{
                cout<<"unavailable"<<endl;
                break;
            }
        }
    }
}
int main(){
    Kitab books[4];
    for(int i=0; i<4;i++)
    {
        Kitab book;
        string author;
        string title;
        string publisher;
        float price;
        int stock;
        cout << "Enter Book Details: ";
        cin >> book.author >> book.title>>book.publisher>>book.price>>book.stock;
        books[i] = book;
    }
    while(true)
    {
        cout<<"What Would Ya Like To Do? : "<<endl;
        int n;
        cout<<"1. Search And Buy\n2. Search And Buy using function\n";
        cin>>n;
        if(n==1)
        {
            string title;string author;
            Kitab bookobj;
            cout<<"Enter Book Title and Author: ";cin>>title>>author;
            for(int i=0;i<3;i++)
    {
        if(title==books[i].title&&author==books[i].author)
        {
            cout<<"available"<<endl;
            int a;
            cout<<"enter quantity: ";cin>>a;
            if(a<=books[i].stock)
            {
                cout<<"available"<<endl;
                cout<<"Total Price: "<<a*books[i].price<<endl;
                break;
            }
            
            else{
                cout<<"unavailable"<<endl;
                break;
            }
        }
    }
            
        }
        if(n==2)
        {
            string title;string author;
            cout<<"Enter Book Title and Author: ";cin>>title>>author;
            Inventory inv;
            inv.Inventorys(title,author);
        }
        else{
            exit(3);
        }
    }
    return 0;
}
